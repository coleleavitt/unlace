#include <arm_sme.h>

void outer(svfloat32_t a, svfloat32_t b) __arm_streaming __arm_inout("za")
{
    svmopa_za32_f32_m(0, svptrue_b32(), svptrue_b32(), a, b);
}

svfloat32_t read_row(uint32_t slice) __arm_streaming __arm_in("za")
{
    return svread_hor_za32_f32_m(svundef_f32(), svptrue_b32(), 1, slice);
}

void zero_all(void) __arm_streaming __arm_out("za")
{
    svzero_za();
}

void store_row(float *p, uint32_t slice) __arm_streaming __arm_in("za")
{
    svst1_hor_za32(0, slice, svptrue_b32(), p);
}

void add_vg2(uint32_t slice, svint32x2_t z) __arm_streaming __arm_inout("za")
{
    svadd_za32_s32_vg1x2(slice, z);
}
