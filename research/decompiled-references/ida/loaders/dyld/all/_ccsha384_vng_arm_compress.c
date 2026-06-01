__int64 *__fastcall ccsha384_vng_arm_compress(__int64 *result, __int64 a2, int8x16_t *a3)
{
  if ( (MEMORY[0xFFFFFC010] & 0x80000000) != 0 )
    return (__int64 *)AccelerateCrypto_SHA512_compress_hwassist(result, a2, a3);
  else
    return AccelerateCrypto_SHA512_compress(result, a2, a3);
}
