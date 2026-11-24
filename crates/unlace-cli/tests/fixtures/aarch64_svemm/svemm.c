#include <arm_sve.h>

svfloat64_t mmla_d(svfloat64_t acc, svfloat64_t a, svfloat64_t b)
{
    return svmmla_f64(acc, a, b);
}

svint32_t mmla_s8(svint32_t acc, svint8_t a, svint8_t b)
{
    return svmmla_s32(acc, a, b);
}

svfloat32_t bf_dot(svfloat32_t acc, svbfloat16_t a, svbfloat16_t b)
{
    return svbfdot_f32(acc, a, b);
}

svfloat32_t bf_mlal(svfloat32_t acc, svbfloat16_t a, svbfloat16_t b)
{
    return svbfmlalt_f32(svbfmlalb_f32(acc, a, b), a, b);
}

svint32_t ld_ro(svbool_t pg, const int32_t *p)
{
    return svld1ro_s32(pg, p);
}
