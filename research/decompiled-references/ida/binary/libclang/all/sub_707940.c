unsigned __int64 __fastcall sub_707940(unsigned __int64 *a1, __int64 a2, int *a3, _DWORD *a4)
{
  unsigned __int64 result; // rax
  char v8; // al
  unsigned __int64 v9; // rax
  bool v10; // bl
  __int16 v11; // ax
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // rdx
  unsigned __int64 v18; // [rsp+0h] [rbp-138h]
  unsigned __int64 v19; // [rsp+10h] [rbp-128h]
  unsigned __int64 v20; // [rsp+18h] [rbp-120h]
  char v21; // [rsp+25h] [rbp-113h] BYREF
  __int16 v22; // [rsp+26h] [rbp-112h] BYREF
  char *v23; // [rsp+28h] [rbp-110h] BYREF
  void *ptr; // [rsp+30h] [rbp-108h] BYREF
  __int64 v25; // [rsp+38h] [rbp-100h]
  _BYTE v26[64]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v27; // [rsp+80h] [rbp-B8h] BYREF
  int v28; // [rsp+90h] [rbp-A8h]
  int v29; // [rsp+98h] [rbp-A0h]
  __int64 v30; // [rsp+A0h] [rbp-98h]
  __int64 v31; // [rsp+A8h] [rbp-90h]
  __int128 v32; // [rsp+B0h] [rbp-88h]
  __int128 v33; // [rsp+C0h] [rbp-78h]
  int v34; // [rsp+D0h] [rbp-68h]
  __int64 v35; // [rsp+D8h] [rbp-60h]
  __int64 v36; // [rsp+E0h] [rbp-58h]
  __int64 v37; // [rsp+E8h] [rbp-50h]
  __int64 v38; // [rsp+F0h] [rbp-48h]

  v23 = *(char **)(sub_C63970(a1[2170], a2) + 16);
  if ( !*v23 )
  {
    *a3 = 1;
    return 0;
  }
  *a3 = 0;
  ptr = v26;
  v21 = 0;
  v25 = 0x800000000LL;
  v19 = sub_707040(&v23, a1, a3, &v21, 1);
  if ( !*a3 )
  {
    v8 = *v23;
    if ( *v23 && v8 != 46 )
    {
      while ( 1 )
      {
        v9 = sub_707040(&v23, a1, a3, &v21, 1);
        if ( *a3 )
          break;
        if ( v21 && a4 )
          *a4 |= 1 << v25;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
          v9 = sub_6DA450(a1, v9);
        if ( HIDWORD(v25) >= (unsigned __int64)(unsigned int)v25 + 1 )
        {
          *((_QWORD *)ptr + (unsigned int)v25) = v9;
        }
        else
        {
          v20 = v9;
          sub_25D6060(&ptr, v26, (unsigned int)v25 + 1LL, 8);
          *((_QWORD *)ptr + (unsigned int)v25) = v20;
        }
        LODWORD(v25) = v25 + 1;
        v8 = *v23;
        if ( !*v23 || v8 == 46 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      if ( (_DWORD)a2 != 650 )
      {
        v10 = v8 == 46;
        v11 = sub_6CE3E0((__int64)a1, v8 == 46, 0, 1);
        v12 = a1[2170];
        v22 = v11;
        v13 = sub_C63970(v12, (unsigned int)a2);
        if ( strchr(*(const char **)(v13 + 24), 114) )
          v22 |= 0x20u;
        v14 = (unsigned int)v25;
        v15 = a1[270];
        if ( (_DWORD)v25 || !v10 || (*(_WORD *)v15 & 0x808) != 0 || (*(_BYTE *)(v15 + 12) & 1) != 0 )
        {
          v27.m128i_i64[1] = 0;
          v28 = 0;
          v27.m128i_i16[0] = v22;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v27.m128i_i16[1] = v10 | v27.m128i_i16[1] & 0xF800;
          v32 = 0;
          v33 = 0;
          if ( (*(_BYTE *)(v15 + 1) & 8) != 0 )
          {
            v16 = sub_C63970(a1[2170], (unsigned int)a2);
            v17 = strchr(*(const char **)(v16 + 24), 110);
            v14 = (unsigned int)v25;
            if ( v17 )
              v29 = (*(_BYTE *)(a1[270] + 1) & 0x10) == 0 ? 1 : 5;
          }
          result = sub_6DB070((__int64)a1, v19, (__int64)ptr, v14, &v27, 0);
        }
        else
        {
          result = sub_6C7100((__int64)a1, v19, (unsigned __int16 *)&v22);
        }
        goto LABEL_21;
      }
    }
  }
  result = 0;
LABEL_21:
  if ( ptr != v26 )
  {
    v18 = result;
    free(ptr);
    return v18;
  }
  return result;
}

