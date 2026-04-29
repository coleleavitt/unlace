__int64 __fastcall sub_2CE00(__int64 a1, _QWORD *a2, int a3, const char *a4, double a5, double a6)
{
  __int64 result; // rax
  const char *v8; // rsi
  __int64 v11; // rdi
  __int64 v13; // rdx
  int v14; // esi
  int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rcx
  const char *v18; // rsi
  const char *v19; // rdi
  int v20; // ecx
  __int64 v21; // rdx

  result = *(_QWORD *)(a1 + 64);
  if ( result )
  {
    v8 = (const char *)a2[4];
    if ( v8 )
    {
      if ( !*(_BYTE *)(a1 + 96) )
      {
        v11 = a2[2];
        if ( *(_WORD *)(result + 520) == 1 )
        {
          if ( v11 )
          {
            sub_EAA0(
              (__int64)"The address 0x%a of the '%s' TLS section should be zero in the relocatable file, ignoring it\n",
              a5,
              (const char *)a2[2]);
            result = *(unsigned __int8 *)(a1 + 24);
            if ( !(_BYTE)result )
            {
              v11 = a2[2];
              goto LABEL_18;
            }
            v8 = (const char *)a2[4];
          }
          else
          {
            result = *(unsigned __int8 *)(a1 + 24);
            if ( !(_BYTE)result )
              goto LABEL_18;
          }
        }
        else
        {
          result = *(unsigned __int8 *)(a1 + 24);
          if ( !(_BYTE)result )
            goto LABEL_18;
          if ( *(_QWORD *)a1 != v11 )
          {
            sub_EAA0(
              (__int64)"The address 0x%a of the '%s' TLS section differs from the one 0x%a of the TLS initialization image\n",
              a5,
              (const char *)a2[2],
              a6);
            v8 = (const char *)a2[4];
            LOBYTE(result) = 0;
            if ( *(const char **)(a1 + 144) == v8 )
            {
LABEL_8:
              v13 = a2[6];
              v14 = 1;
              if ( (unsigned __int64)(v13 - 2) <= 0xFFE )
              {
                v15 = *(_DWORD *)(a1 + 16);
                if ( (v13 & (v13 - 1)) == 0 )
                  v14 = a2[6];
                if ( v15 >= v14 )
                  goto LABEL_10;
              }
              else
              {
                v15 = *(_DWORD *)(a1 + 16);
                if ( v15 >= 1 )
                {
LABEL_10:
                  if ( *(_QWORD *)(a1 + 144) )
                  {
                    v16 = a2[3];
                    v17 = *(_QWORD *)(a1 + 136);
                    if ( v16 != v17 )
                    {
LABEL_12:
                      sub_EAA0(
                        (__int64)"The file offset 0x%llX of the '%s' TLS section differs from the one 0x0x%llX of the TLS"
                                 " initialization image\n",
                        v16,
                        a4,
                        v17);
LABEL_13:
                      result = *(unsigned __int8 *)(a1 + 24);
                      goto LABEL_20;
                    }
                  }
                  if ( !(_BYTE)result )
                  {
                    result = *(unsigned __int8 *)(a1 + 24);
LABEL_20:
                    if ( !(_BYTE)result )
                      *(__m128 *)(a1 + 136) = _mm_loadh_ps((const double *)(a1 + 80));
                    return result;
                  }
                  v11 = a2[2];
                  result = *(unsigned __int8 *)(a1 + 24);
LABEL_18:
                  *(_QWORD *)(a1 + 72) = v11;
                  v20 = 1;
                  *(_QWORD *)(a1 + 80) = a2[4];
                  v21 = a2[6];
                  if ( (unsigned __int64)(v21 - 2) <= 0xFFE && (v21 & (v21 - 1)) == 0 )
                    v20 = a2[6];
                  *(_DWORD *)(a1 + 88) = v20;
                  *(_DWORD *)(a1 + 92) = a3;
                  *(_BYTE *)(a1 + 96) = 1;
                  goto LABEL_20;
                }
              }
              sub_EAA0(
                (__int64)"The alignment %d of the '%s' TLS section is larger than the one %d of the TLS template\n",
                v14,
                a4,
                v15);
              if ( !*(_QWORD *)(a1 + 144) )
                goto LABEL_13;
              v16 = a2[3];
              v17 = *(_QWORD *)(a1 + 136);
              if ( v17 == v16 )
                goto LABEL_13;
              goto LABEL_12;
            }
LABEL_33:
            sub_EAA0(
              (__int64)"The size 0x%a of the '%s' TLS section differs from the one 0x%a of the TLS initialization image\n",
              a5,
              v8,
              a6);
            LOBYTE(result) = 0;
            goto LABEL_8;
          }
        }
        if ( *(const char **)(a1 + 144) == v8 )
          goto LABEL_8;
        goto LABEL_33;
      }
      v18 = a4;
      v19 = "Multiple TLS PROGBITS sections, ignoring the '%s' section\n";
    }
    else
    {
      v18 = a4;
      v19 = "Illegal size of the '%s' TLS section, ignore it\n";
      if ( *(_BYTE *)(a1 + 24) )
        return result;
    }
    return sub_EAA0((__int64)v19, v18);
  }
  if ( under_debugger )
    BUG();
  interr(20093);
  return sub_2D0A0();
}
