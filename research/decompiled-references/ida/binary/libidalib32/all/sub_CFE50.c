__int64 __fastcall sub_CFE50(const char *a1)
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
  unsigned int v12; // [rsp+Ch] [rbp-45Ch]
  int v13; // [rsp+14h] [rbp-454h] BYREF
  _DWORD v14[2]; // [rsp+18h] [rbp-450h] BYREF
  int v15; // [rsp+20h] [rbp-448h] BYREF
  __int64 v16; // [rsp+28h] [rbp-440h]
  __int128 v17; // [rsp+30h] [rbp-438h]
  char v18[1032]; // [rsp+40h] [rbp-428h] BYREF
  unsigned __int64 v19; // [rsp+448h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( !dbg )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(dbg + 37LL) & 1) == 0 )
    return 0xFFFFFFFFLL;
  if ( dword_2515A4 >= 0 )
    return 0xFFFFFFFFLL;
  v1 = a1;
  v2 = strchr(a1, 58);
  v3 = v2;
  if ( !v2 )
    return 0xFFFFFFFFLL;
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
  v8 = sub_C86D0(v18, (__int64)&v13);
  if ( v8 < 0 )
    return 0xFFFFFFFFLL;
  v15 = -2;
  v17 = 0;
  v16 = -1;
  if ( (unsigned __int8)sub_CE8E0(dword_251408, v8, (__int64)&v15)
    && dbg
    && (*(_BYTE *)(dbg + 37LL) & 1) != 0
    && (v10 = qword_2515B0) != nullptr
    && (v11 = dword_251408,
        *((_DWORD *)qword_2515B0 + 2) = v16,
        *(_DWORD *)v10 = v11,
        v10[2] = v14,
        (int)sub_CC780((__int64)v10, 10) > 0)
    && !strchr(v3 + 1, 58)
    && (unsigned __int8)str2ea_ex() )
  {
    get_eah();
    result = (unsigned int)(v14[0] + v14[1]);
  }
  else
  {
    result = 0xFFFFFFFFLL;
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

