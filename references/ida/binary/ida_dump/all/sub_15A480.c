__int64 __fastcall sub_15A480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int *v6; // rax
  char *v11; // r13
  int v13; // edx
  __int64 v14; // rcx
  int *v15; // rdi
  int v16; // eax
  int v18; // edi
  int v19; // esi
  __int64 v20; // rdx
  char v21; // al
  char v22; // al
  unsigned int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 *v26; // rsi
  __int64 v27; // [rsp+8h] [rbp-70h]
  char *v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h] BYREF
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v31[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
  {
    if ( !under_debugger )
      sub_383060(50492);
    BUG();
  }
  v6 = *(int **)(a4 + 8);
  v11 = (char *)a5;
  v13 = *v6;
  v14 = (unsigned int)(*v6 - 12);
  if ( (unsigned int)v14 > 1 || *(_BYTE *)a5 != 2 || !a3 )
    goto LABEL_5;
  v18 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 1184LL);
  v14 = *((unsigned __int8 *)v6 + 32);
  if ( (_BYTE)v14 == 1 && ((a5 = (unsigned int)v6[10], *(_DWORD *)(a2 + 60) == (_DWORD)a5) || v18 == (_DWORD)a5) )
  {
    a5 = (__int64)(v6 + 12);
    v14 = *((unsigned __int8 *)v6 + 48);
  }
  else
  {
    if ( *((_BYTE *)v6 + 48) != 1 )
      goto LABEL_5;
    v19 = v6[14];
    if ( *(_DWORD *)(a2 + 60) != v19 && v18 != v19 )
      goto LABEL_5;
    a5 = (__int64)(v6 + 8);
  }
  if ( (_BYTE)v14 == 2 )
  {
    if ( v13 == 12 || (int *)a5 == v6 + 12 )
    {
      v28 = (char *)a5;
      if ( (unsigned __int8)sub_11FD80(v11, &v30, 1u) )
      {
        v21 = netnode_charval();
        a5 = (__int64)v28;
        if ( v21 == 1 )
        {
          v22 = sub_11FD80(v28, &v29, 1u);
          a5 = (__int64)v28;
          if ( v22 )
          {
            v23 = *((_DWORD *)v28 + 1);
            if ( **(_DWORD **)(a4 + 8) == 12 )
              v24 = sub_15A410(v30, v29, v23);
            else
              v24 = sub_15A440(v30, v29, v23);
            sub_14E870(*((_DWORD *)v11 + 1), *((__m128i **)v11 + 1), v24);
            v25 = *(_QWORD *)(a4 + 8);
            v26 = (unsigned __int8 *)(v25 + 32);
            if ( (char *)(v25 + 32) == v28 )
              v26 = (unsigned __int8 *)(v25 + 48);
            sub_123A40((__int64)v31, v26);
            sub_11CA10((char *)a4, (char *)v31);
            sub_11CDA0((__int64)v31);
            return 1;
          }
        }
      }
    }
LABEL_5:
    if ( (unsigned __int8)sub_1205A0((_BYTE *)a1, a2, 0, v14, a5, a6) )
      return 0;
    v15 = *(int **)(a4 + 8);
    v16 = *v15;
    if ( *v15 == 22 )
    {
      if ( *((_BYTE *)v15 + 48) != 2 )
      {
LABEL_8:
        if ( a3 )
          return sub_119850((_DWORD *)a1, a3, a6);
        return 0;
      }
      v27 = *(_QWORD *)(*((_QWORD *)v15 + 7) + 16LL);
      if ( sub_125B60((unsigned __int8 *)v11, (__int64)(v15 + 8), 0) )
      {
        *(_DWORD *)a1 = 14;
        v20 = 1;
        if ( (v27 & 0xC0) == 0 )
          v20 = (1LL << v27) + 1;
        sub_120A10(a4, a2, v20, *((_DWORD *)v11 + 1), *(_QWORD *)(a1 + 24), 0);
        return 1;
      }
      v15 = *(int **)(a4 + 8);
      v16 = *v15;
    }
    if ( v16 == 14
      && ((unsigned __int8)sub_11FD80((char *)v15 + 48, v31, 0)
       && sub_125B60((unsigned __int8 *)v11, *(_QWORD *)(a4 + 8) + 32LL, 0)
       || (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a4 + 8) + 32LL), v31, 0)
       && sub_125B60((unsigned __int8 *)v11, *(_QWORD *)(a4 + 8) + 48LL, 0)) )
    {
      *(_DWORD *)a1 = 14;
      sub_120A10(a4, a2, v31[0] + 1LL, *(_DWORD *)(a4 + 4), *(_QWORD *)(a1 + 24), 0);
      return 1;
    }
    goto LABEL_8;
  }
  if ( v13 != 12 )
    goto LABEL_5;
  sub_11CA10((char *)a5, v11);
  return 1;
}
