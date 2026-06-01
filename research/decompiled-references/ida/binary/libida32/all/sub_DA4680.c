__int64 __fastcall sub_DA4680(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // edx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned __int8 **v12; // rax
  unsigned __int8 v13; // r13
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 **v18; // r14
  __int64 v19; // r15
  int v20; // eax
  __int64 *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  unsigned __int8 **v26; // rax
  __int64 *v27; // rdi
  unsigned int v28; // eax
  _QWORD v29[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *(_DWORD *)(a3 + 24);
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a3 + 32);
    if ( v8 )
    {
      result = 1;
      if ( !*(_BYTE *)(v8 + 26) )
        return result;
      v10 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v11 = *(_DWORD *)(a3 + 24);
      v29[0] = v10;
      if ( !v11 && *(_BYTE *)(*(_QWORD *)(a3 + 32) + 28LL) )
      {
        v12 = (unsigned __int8 **)sub_E0FE60(a1, v29, 2366, 0);
        if ( !v12 )
          return 0;
        goto LABEL_32;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
      if ( v13 )
        return 0;
      if ( *(_DWORD *)(a3 + 24) )
      {
        v14 = v29;
        v19 = 1;
        v18 = (unsigned __int8 **)sub_E0FE60(a1, v29, 2423, 1);
        if ( !v18 )
        {
          v20 = *(_DWORD *)(a3 + 24);
          goto LABEL_35;
        }
      }
      else
      {
        v14 = v29;
        v13 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 32LL) + 58LL);
        v18 = (unsigned __int8 **)sub_E0FE60(a1, v29, 2423, 1);
        if ( !v18 )
          goto LABEL_14;
        v19 = v13 ^ 1u;
      }
      sub_AC60B0(v18, a4, 2u);
      v14 = (_QWORD *)v19;
      sub_AC60B0(v18, v19, 2u);
LABEL_14:
      v20 = *(_DWORD *)(a3 + 24);
      if ( v13 )
      {
        if ( v20 == 1 )
        {
          v21 = *(__int64 **)(a3 + 32);
        }
        else if ( (unsigned int)(v20 - 2) <= 1 )
        {
          v21 = nullptr;
        }
        else
        {
          v21 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
        }
        v22 = sub_CCBBD0(v21, (__int64)v14, v15, v16, v17);
        sub_E10070(a1, v22, 2487);
        return 0;
      }
LABEL_35:
      if ( v20 == 1 )
      {
        v27 = *(__int64 **)(a3 + 32);
      }
      else if ( (unsigned int)(v20 - 2) <= 1 )
      {
        v27 = nullptr;
      }
      else
      {
        v27 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
      }
      v28 = sub_CCBBD0(v27, (__int64)v14, v15, v16, v17);
      sub_E10070(a1, v28, 103);
      return 0;
    }
LABEL_20:
    v23 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v24 = *(_DWORD *)(a3 + 24);
    v29[0] = v23;
    if ( !v24 && !(unsigned __int8)sub_CDA840(a3) )
    {
      v25 = *(_QWORD *)sub_CDA220(a3);
      if ( (v25 & 2) == 0 && (v25 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v26 = (unsigned __int8 **)sub_E0FE60(a1, v29, 2461, 0);
        if ( v26 )
          sub_AC60B0(v26, 2, 2u);
        return 0;
      }
    }
    v12 = (unsigned __int8 **)sub_E0FE60(a1, v29, 2369, 0);
    if ( !v12 )
      return 0;
LABEL_32:
    sub_AC60B0(v12, a4, 2u);
    return 0;
  }
  if ( v7 == 2 )
  {
    if ( *(_QWORD *)(a3 + 32) )
      return 1;
    goto LABEL_20;
  }
  result = 1;
  if ( v7 != 3 && !*(_QWORD *)(a3 + 40) && !*(_QWORD *)a3 )
    goto LABEL_20;
  return result;
}

