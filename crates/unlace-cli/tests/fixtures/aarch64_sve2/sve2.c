#include <arm_sve.h>

svint32_t qrdmlah(svint32_t acc, svint32_t a, svint32_t b)
{
    return svqrdmlah_s32(acc, a, b);
}

svint32_t pairwise(svbool_t pg, svint32_t a, svint32_t b)
{
    return svaddp_s32_m(pg, a, b);
}

int any_left(int64_t i, int64_t n)
{
    return svptest_first(svptrue_b32(), svwhilege_b32_s64(i, n));
}

void histogram(const uint32_t *keys, uint32_t *out, int64_t n)
{
    for (int64_t i = 0; i < n; i += svcntw()) {
        svbool_t pg = svwhilelt_b32_s64(i, n);
        svuint32_t k = svld1_u32(pg, keys + i);
        svst1_u32(pg, out + i, svhistcnt_u32_z(pg, k, k));
    }
}
