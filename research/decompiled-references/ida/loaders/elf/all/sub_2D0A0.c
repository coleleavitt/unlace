__int64 __fastcall sub_2D0A0(__int64 a1, _QWORD *a2, int a3, const char *a4, double a5, double a6)
{
  __int64 result; // rax
  __int16 v10; // r15
  char v12; // dl
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // r8
  int v16; // esi
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // r14
  const char *v20; // rsi
  const char *v21; // rsi
  const char *v22; // rdi
  const char *v23; // rsi
  __int64 v24; // [rsp+8h] [rbp-40h]

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    if ( a2[4] )
    {
      if ( !*(_BYTE *)(a1 + 128) )
      {
        v10 = *(_WORD *)(result + 520);
        if ( v10 == 1 )
        {
          v23 = (const char *)a2[2];
          if ( v23 )
            sub_EAA0(
              (__int64)"The address 0x%a of the '%s' TLS section should be zero in the relocatable file, ignoring it\n",
              a5,
              v23);
        }
        v12 = *(_BYTE *)(a1 + 24);
        if ( v12 )
        {
          v13 = a2[6];
          if ( (unsigned __int64)(v13 - 2) > 0xFFE || (v13 & (v13 - 1)) != 0 )
          {
            v14 = -1;
            v15 = 0;
            v16 = 1;
          }
          else
          {
            v16 = a2[6];
            v15 = (int)v13 - 1;
            v14 = -*((_DWORD *)a2 + 12);
          }
          v17 = *(_DWORD *)(a1 + 16);
          if ( v17 < v16 )
          {
            v24 = v15;
            sub_EAA0(
              (__int64)"The alignment %d of the '%s' TLS section is larger than the one %d of the TLS template\n",
              v16,
              a4,
              v17);
            v15 = v24;
            v12 = 0;
          }
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 456LL);
          result = v15 + *(_QWORD *)a1 + *(_QWORD *)(a1 + 144);
          v19 = result & v18 & v14;
          if ( v10 == 1 || (result = v18 & a2[2], v19 == result) )
          {
            v20 = (const char *)(a2[4] & v18);
            if ( (const char *)(*(_QWORD *)(a1 + 8) + *(_QWORD *)a1 - v19) == v20 )
            {
              if ( !v12 )
                return result;
              goto LABEL_14;
            }
          }
          else
          {
            sub_EAA0(
              (__int64)"The address 0x%a of the '%s' TLS section differs from the one 0x%a of the TLS uninitialized data\n",
              a5,
              (const char *)(v18 & a2[2]),
              a6);
            result = *(_QWORD *)(a1 + 64);
            v20 = (const char *)(a2[4] & *(_QWORD *)(result + 456));
            if ( (const char *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8) - v19) == v20 )
              return result;
          }
          return sub_EAA0(
                   (__int64)"The size 0x%a of the '%s' TLS section differs from the one 0x%a of the TLS uninitialized data\n",
                   a5,
                   v20,
                   a6);
        }
LABEL_14:
        *(_QWORD *)(a1 + 104) = a2[2];
        *(_QWORD *)(a1 + 112) = a2[4];
        result = a2[6];
        if ( (unsigned __int64)(result - 2) <= 0xFFE )
        {
          if ( (result & (result - 1)) != 0 )
            result = 1;
        }
        else
        {
          result = 1;
        }
        *(_DWORD *)(a1 + 120) = result;
        *(_DWORD *)(a1 + 124) = a3;
        *(_BYTE *)(a1 + 128) = 1;
        return result;
      }
      v21 = a4;
      v22 = "Multiple TLS NOBITS sections, ignoring the '%s' section\n";
    }
    else
    {
      v21 = a4;
      v22 = "Illegal size of the '%s' TLS section, ignore it\n";
      if ( *(_BYTE *)(a1 + 24) )
        return result;
    }
    return sub_EAA0((__int64)v22, v21);
  }
  if ( under_debugger )
    BUG();
  interr(20094);
  return sub_2D300();
}

