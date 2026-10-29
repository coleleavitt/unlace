__int64 __fastcall sub_19EC960(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  unsigned __int64 v35; // [rsp+8h] [rbp-80h]
  _QWORD v36[4]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v37[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v38[7]; // [rsp+50h] [rbp-38h] BYREF

  v5 = a2;
  *(_BYTE *)(a1 + 9) = a3;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  result = *(_BYTE *)(a2 + 28) & 0x7F;
  v8 = (unsigned __int8)result;
  v9 = (unsigned int)(unsigned __int8)result - 34;
  if ( (unsigned int)v9 <= 5 )
  {
    if ( (unsigned __int8)sub_B7D390(a2, (__int64)v38, 0, v9) )
    {
      v13 = v38[0];
      if ( v38[0] )
      {
        *(_QWORD *)a1 = v38[0];
        v5 = v13;
      }
    }
    *(_BYTE *)(a1 + 8) = 1;
    if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      if ( (*(_QWORD *)(v14 + 80) & 0x40000LL) != 0
        || ((*(_QWORD *)(v14 + 80) >> 16) & 8) != 0
        || (unsigned int)sub_B984E0(v14) )
      {
        *(_BYTE *)(a1 + 8) = 2;
      }
    }
    v15 = *(_QWORD *)(v5 + 112);
    v16 = *(_QWORD *)(v15 + 104);
    v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v16 & 1) == 0 )
    {
      v10 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v16 & 2) == 0 )
        {
LABEL_12:
          v19 = *(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v20 = *(_QWORD *)v19;
          if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) != 26 )
          {
            result = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(result + 16) != 26 )
              goto LABEL_34;
            result = sub_F63050(v20, v20, v17, v10);
            v20 = result;
            if ( !result )
              goto LABEL_34;
          }
          sub_A5DD60(v37, v20);
          result = v37[0];
          v21 = v37[0] + v37[1];
          goto LABEL_14;
        }
        v25 = v10[2295];
        v26 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v25 )
        {
          v27 = v10[294];
          v10[304] += 24LL;
          v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v10[295] >= v28 + 24 && v27 )
          {
            v10[294] = v28 + 24;
            v29 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v29 = sub_986170((__int64)(v10 + 294), 24, 24, 3, v11, v12);
            v28 = v29 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v29 = v25;
          v26 = v28 | 4;
          *(_DWORD *)(v29 + 8) = 0;
          *(_QWORD *)(v29 + 16) = v15;
        }
        v17 = v26 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v17 | 1;
        *(_QWORD *)(v15 + 104) = v17 | 1;
      }
    }
    v30 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v30;
    if ( v17 )
    {
      v17 &= 4u;
      if ( (_DWORD)v17 )
      {
        v18 = 0;
        if ( v30 )
        {
          v31 = *(_QWORD *)v30;
          v17 = *(unsigned int *)(*(_QWORD *)v30 + 12LL);
          if ( *(_DWORD *)(v30 + 8) != (_DWORD)v17 )
          {
            *(_DWORD *)(v30 + 8) = v17;
            v35 = v30;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 152LL))(v31, v15);
            v30 = v35;
          }
          v18 = *(_QWORD *)(v30 + 16);
        }
      }
    }
    goto LABEL_12;
  }
  if ( (_BYTE)result == 8 )
  {
    *(_BYTE *)(a1 + 8) = 3;
    result = *(_QWORD *)(a2 + 96);
    if ( !result )
      goto LABEL_34;
    v32 = *(_QWORD *)result & 0xFFFFFFFFFFFFFFF0LL;
    v33 = *(_QWORD *)v32;
    if ( *(_BYTE *)(*(_QWORD *)v32 + 16LL) != 26 )
    {
      result = *(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(result + 16) != 26 )
        goto LABEL_34;
      result = sub_F63050(v33, v33, v8, v9);
      v33 = result;
      if ( !result )
        goto LABEL_34;
    }
    sub_A5DD60(v38, v33);
    result = v38[0];
    v21 = v38[0] + v38[1];
  }
  else
  {
    v34 = (unsigned int)(unsigned __int8)result - 26;
    if ( (unsigned int)v34 > 0x1A )
      goto LABEL_34;
    sub_15F0AB0(v36, *(_QWORD *)(a2 + 48), v34, v9, a5);
    result = v36[0];
    v21 = v36[0] + v36[1];
  }
LABEL_14:
  if ( result == v21 )
  {
LABEL_34:
    *(_QWORD *)(a1 + 16) = 0;
    return result;
  }
  v22 = *(unsigned __int8 *)result;
  v23 = *(_BYTE *)result;
  if ( v22 > 3 )
LABEL_47:
    std::__throw_out_of_range_fmt("%s: __position (which is %zu) >= _Nb (which is %zu)", "bitset::set", v22, 4u);
  v24 = 0;
  while ( 1 )
  {
    ++result;
    v24 |= 1LL << v23;
    if ( result == v21 )
      break;
    v22 = *(unsigned __int8 *)result;
    v23 = *(_BYTE *)result;
    if ( v22 > 3 )
      goto LABEL_47;
  }
  *(_QWORD *)(a1 + 16) = v24;
  return result;
}
