__int64 __fastcall ___ZNK5dyld311MachOLoaded13getLayoutInfoERNS0_10LayoutInfoE_block_invoke(__int64 a1, int64x2_t *a2)
{
  const char *v4; // x21
  __int64 result; // x0
  int32x2_t *v6; // x8
  __int64 v7; // x9

  v4 = (const char *)a2[2].i64[1];
  result = _platform_strcmp(v4, "__TEXT");
  if ( (_DWORD)result )
  {
    result = _platform_strcmp(v4, "__LINKEDIT");
    v6 = *(int32x2_t **)(a1 + 40);
    if ( !(_DWORD)result )
    {
      v6[2] = *(int32x2_t *)a2[1].i8;
      v6[3] = vmovn_s64(*a2);
      v6[4].i32[0] = (unsigned __int16)a2[3].i32[2] >> 4;
    }
  }
  else
  {
    v7 = a2[1].i64[0];
    v6 = *(int32x2_t **)(a1 + 40);
    *v6 = (int32x2_t)(*(_QWORD *)(a1 + 32) - v7);
    v6[1] = (int32x2_t)v7;
  }
  v6[4].i32[1] = (unsigned __int16)a2[3].i32[2] >> 4;
  return result;
}
