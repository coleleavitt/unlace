__int64 __fastcall sub_3CF160(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v10; // r12
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // r14
  int v16; // r13d
  _QWORD *v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // cc
  __int64 range; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 *v25; // r12
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+8h] [rbp-40h]
  int v33; // [rsp+10h] [rbp-38h]
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 1032);
  v8 = *(_QWORD *)(a1 + 1024);
  v34 = __readfsqword(0x28u);
  if ( v7 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    result = 0;
    if ( a2 == v8 )
    {
      v25 = *(__int64 **)(a1 + 1016);
      v26 = sub_8B8E80(v25, a2);
      result = 0;
      if ( v26 )
      {
        v27 = *v25;
        v28 = v26 >> *(_DWORD *)(*v25 + 8);
        if ( (_DWORD)v28 == *((_DWORD *)v25 + 18) )
        {
          v29 = v25[10];
        }
        else
        {
          *((_DWORD *)v25 + 18) = v28;
          v29 = sub_8BCA60(v27, (unsigned int)v28, 1);
          v25[10] = v29;
        }
        *(_BYTE *)(v29 - 2) = 1;
        v30 = (_QWORD *)*v25;
        *((_BYTE *)v25 + 100) = 1;
        result = (v26 & (*v30 - 1LL) & 0xFFFFFFFFFFFFFFFCLL) + v25[10];
      }
      if ( *(_QWORD *)(a1 + 1032) != result )
      {
        if ( !under_debugger )
          interr(55);
        BUG();
      }
    }
  }
  else
  {
    if ( v7 == -1 )
    {
      if ( a2 == v8 )
      {
        v24 = *(_QWORD *)(a1 + 1000);
        *(_BYTE *)(a1 + 1200) = 1;
        return v24 + 48;
      }
      v10 = (_QWORD *)(a1 + 952);
    }
    else
    {
      v10 = (_QWORD *)(a1 + 904);
      if ( a2 == v8 )
      {
        result = *(_QWORD *)(a1 + 1000) + 48LL;
        if ( v10 != (_QWORD *)(a1 + 952) )
          return result;
LABEL_23:
        *(_BYTE *)(a1 + 1200) = 1;
        return result;
      }
    }
    v12 = *(_QWORD *)(a1 + 1000);
    v13 = v10[3];
    while ( 1 )
    {
      if ( v12 == v13 )
      {
LABEL_26:
        v16 = 0;
        v15 = v10 + 1;
        if ( !*(_QWORD *)(a1 + 1168) )
          goto LABEL_14;
        goto LABEL_27;
      }
      v12 = std::_Rb_tree_decrement(v12);
      v14 = *(_QWORD *)(v12 + 40);
      if ( v14 )
        break;
      if ( (*(_DWORD *)(v12 + 48) & 0x600) != 0x200 )
        goto LABEL_26;
    }
    v15 = v10 + 1;
    if ( v10 + 1 == (_QWORD *)v12 )
      v16 = 0;
    else
      v16 = (a2 < *(_QWORD *)(v12 + 32) + v14) << 9;
    if ( !*(_QWORD *)(a1 + 1168) )
      goto LABEL_14;
LABEL_27:
    v12 = a1 + 1160;
    range = rangeset_t_find_range(a1 + 1160, a2);
    v23 = v16;
    if ( range )
    {
      BYTE1(v23) = BYTE1(v16) | 1;
      v16 = v23;
    }
LABEL_14:
    v17 = (_QWORD *)v10[2];
    v31 = a2;
    v18 = v15;
    v32 = 0;
    v33 = v16;
    if ( !v17 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v19 = v17[2];
        v20 = v17[3];
        if ( v17[4] < a2 )
          break;
        v18 = v17;
        v17 = (_QWORD *)v17[2];
        if ( !v19 )
          goto LABEL_19;
      }
      v17 = (_QWORD *)v17[3];
    }
    while ( v20 );
LABEL_19:
    if ( v18 == v15 || a2 < v18[4] )
    {
LABEL_24:
      v12 = (__int64)v10;
      v18 = sub_3CD760(v10, v18, (__int64)&v31);
    }
    v21 = *(_QWORD *)(a1 + 1032) <= 0xFFFFFFFFFFFFFFFDLL;
    *(_QWORD *)(a1 + 1000) = v18;
    if ( v21 )
      sub_3B8CD0(v12, v18, v17, v19, a5, a6, v31, v32, v33);
    *(_QWORD *)(a1 + 1024) = a2;
    result = (__int64)(v18 + 6);
    if ( v10 == (_QWORD *)(a1 + 952) )
      goto LABEL_23;
  }
  return result;
}
