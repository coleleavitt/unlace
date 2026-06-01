__int64 __fastcall sub_D1420(const char *a1)
{
  const char *v1; // rbx
  char *v2; // rax
  char *v3; // rbp
  unsigned __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  __int64 result; // rax
  _QWORD *v10; // rdi
  int v11; // edx
  __int64 v12; // [rsp+8h] [rbp-470h]
  int v13; // [rsp+1Ch] [rbp-45Ch] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-458h] BYREF
  int v15; // [rsp+30h] [rbp-448h] BYREF
  __int64 v16; // [rsp+38h] [rbp-440h]
  __int128 v17; // [rsp+40h] [rbp-438h]
  char v18[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v19; // [rsp+458h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( !dbg )
    return -1;
  if ( (*(_BYTE *)(dbg + 37LL) & 1) == 0 )
    return -1;
  if ( dword_25274C >= 0 )
    return -1;
  v1 = a1;
  v2 = strchr(a1, 58);
  v3 = v2;
  if ( !v2 )
    return -1;
  v4 = v2 - a1;
  v5 = v18;
  if ( v4 > 0x3FF )
    v4 = 1023;
  if ( (unsigned int)v4 >= 8 )
  {
    v6 = (unsigned int)v4 >> 3;
    qmemcpy(v18, v1, 8 * v6);
    v5 = &v18[8 * v6];
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
  v18[v4] = 0;
  v13 = 0;
  v8 = sub_C9B90(v18, (__int64)&v13);
  if ( v8 < 0 )
    return -1;
  v15 = -2;
  v17 = 0;
  v16 = -1;
  if ( (unsigned __int8)sub_CFEA0(dword_252588, v8, (__int64)&v15)
    && dbg
    && (*(_BYTE *)(dbg + 37LL) & 1) != 0
    && (v10 = qword_252758) != nullptr
    && (v11 = dword_252588,
        *((_DWORD *)qword_252758 + 4) = v16,
        *(_DWORD *)v10 = v11,
        v10[3] = v14,
        (int)sub_CDCF0((__int64)v10, 10) > 0)
    && !strchr(v3 + 1, 58)
    && (unsigned __int8)str2ea_ex() )
  {
    result = *(_QWORD *)(get_eah() + 16) & (v14[0] + v14[1]);
  }
  else
  {
    result = -1;
  }
  if ( v15 >= -1 )
  {
    if ( v16 )
    {
      v12 = result;
      *(_QWORD *)&v17 = 0;
      qfree();
      return v12;
    }
  }
  return result;
}

