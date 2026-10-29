__int64 __fastcall sub_2407B0(const char *a1)
{
  const char *v1; // rbx
  char *v2; // rax
  char *v3; // rbp
  unsigned __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rsi
  char *v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  const char *v14; // rbp
  __int64 v15; // rdx
  __int64 eah; // rdx
  __int64 v17; // [rsp+8h] [rbp-470h]
  int v18; // [rsp+1Ch] [rbp-45Ch] BYREF
  __int64 v19; // [rsp+20h] [rbp-458h] BYREF
  __int64 v20; // [rsp+28h] [rbp-450h] BYREF
  int v21; // [rsp+30h] [rbp-448h] BYREF
  __int64 v22; // [rsp+38h] [rbp-440h]
  __int128 v23; // [rsp+40h] [rbp-438h]
  char v24[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v25; // [rsp+458h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  if ( !dbg )
    return -1;
  if ( (*(_BYTE *)(dbg + 37) & 1) == 0 )
    return -1;
  if ( dword_8CC5F0 >= 0 )
    return -1;
  v1 = a1;
  v2 = strchr(a1, 58);
  v3 = v2;
  if ( !v2 )
    return -1;
  v4 = v2 - a1;
  v5 = v24;
  if ( v4 > 0x3FF )
    v4 = 1023;
  if ( (unsigned int)v4 >= 8 )
  {
    v6 = (unsigned int)v4 >> 3;
    qmemcpy(v24, v1, 8 * v6);
    v5 = &v24[8 * v6];
    v1 += 8 * v6;
  }
  v7 = 0;
  if ( (v4 & 4) != 0 )
  {
    *(_DWORD *)v5 = *(_DWORD *)v1;
    v7 = 4;
  }
  if ( (v4 & 2) != 0 )
  {
    *(_WORD *)&v5[v7] = *(_WORD *)&v1[v7];
    v7 += 2;
  }
  if ( (v4 & 1) != 0 )
    v5[v7] = v1[v7];
  v24[v4] = 0;
  v18 = 0;
  v8 = sub_2383E0(v24, (__int64)&v18, v7);
  v9 = (unsigned int)v8;
  if ( v8 < 0 )
    return -1;
  v21 = -2;
  v23 = 0;
  v22 = -1;
  if ( (unsigned __int8)sub_23F680(dword_8CC428, v8, (const char *)&v21, 0.0)
    && dbg
    && (*(_BYTE *)(dbg + 37) & 1) != 0
    && (v12 = qword_8CC600) != nullptr
    && (v13 = (unsigned int)dword_8CC428,
        v9 = 10,
        *((_DWORD *)qword_8CC600 + 4) = v22,
        *(_DWORD *)v12 = v13,
        v12[3] = &v19,
        (int)sub_23D480((__int64)v12, 10, v13, v10, 0.0) > 0)
    && (v14 = v3 + 1, v9 = 58, !strchr(v14, 58))
    && (v9 = (__int64)v14, (unsigned __int8)str2ea_ex(&v20, v14, xmmword_8CC810, 1)) )
  {
    eah = get_eah(&v20, v14, v15);
    result = *(_QWORD *)(eah + 16) & (v19 + v20);
  }
  else
  {
    result = -1;
  }
  if ( v21 >= -1 )
  {
    if ( v22 )
    {
      v17 = result;
      *(_QWORD *)&v23 = 0;
      qfree(v22, (const char *)v9);
      return v17;
    }
  }
  return result;
}
