// attributes: thunk
int32x4_t *__fastcall ccsha256_vng_arm_compress(int32x4_t *result, __int64 a2, int8x16_t *a3)
{
  return AccelerateCrypto_SHA256_compress(result, a2, a3);
}
