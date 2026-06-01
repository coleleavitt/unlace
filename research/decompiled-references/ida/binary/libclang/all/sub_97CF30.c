__int64 __fastcall sub_97CF30(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // r13
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r15
  void *v13; // r14
  int v14; // ebx
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  void *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r13
  unsigned __int8 **v32; // rax
  unsigned __int8 **v33; // r13
  __int64 v34; // rax
  void *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-60h] BYREF
  void *v39; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+18h] [rbp-50h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (char)sub_915550(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (unsigned __int8)sub_915900(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (__int16)sub_915930(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (unsigned __int16)sub_915CE0(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (int)sub_915D10(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (unsigned int)sub_9160C0(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = sub_9160F0(*(_QWORD *)(a1 + 568));
        if ( a3 )
          goto LABEL_34;
        goto LABEL_36;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = sub_9164A0(*(_QWORD *)(a1 + 568));
        if ( !a3 )
          goto LABEL_36;
        goto LABEL_34;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v23 = *(_QWORD *)(a1 + 568);
        v24 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_919FD0((__int64)&v39, v23);
        if ( a3 )
        {
          v38 = sub_A16CE0(*(_QWORD *)(a1 + 584), v24);
          v25 = (unsigned __int8 **)sub_A2E1B0(a1 + 384, &v38, 2215, 0);
          v26 = v25;
          if ( v25 )
          {
            sub_8D6BF0(v25, 2);
            v27 = sub_A2CB40(a1 + 384);
            sub_8D6E40(v26, (*(_BYTE *)(v27 + 1) & 8) != 0);
          }
          else
          {
            sub_A2CB40(a1 + 384);
          }
        }
        v28 = *(_QWORD *)(a1 + 568);
        v29 = sub_9301F0((__int64)&v39);
        goto LABEL_47;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v30 = *(_QWORD *)(a1 + 568);
        v31 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_91A020((__int64)&v39, v30);
        if ( a3 )
        {
          v38 = sub_A16CE0(*(_QWORD *)(a1 + 584), v31);
          v32 = (unsigned __int8 **)sub_A2E1B0(a1 + 384, &v38, 2215, 0);
          v33 = v32;
          if ( v32 )
          {
            sub_8D6BF0(v32, 2);
            v34 = sub_A2CB40(a1 + 384);
            sub_8D6E40(v33, (*(_BYTE *)(v34 + 1) & 8) != 0);
          }
          else
          {
            sub_A2CB40(a1 + 384);
          }
        }
        v28 = *(_QWORD *)(a1 + 568);
        v29 = sub_930AB0((__int64)&v39);
LABEL_47:
        v35 = v29;
        v36 = sub_A1A4E0(v28, 56);
        *(_QWORD *)v36 = 0;
        *(_DWORD *)(v36 + 48) = 1;
        *(_QWORD *)(v36 + 32) = v35;
        *(_QWORD *)(v36 + 24) = a3;
        *(_OWORD *)(v36 + 8) = 0;
        if ( v40 > 0x40 )
        {
          v16 = v39;
          if ( v39 )
            goto LABEL_49;
        }
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v18 = (unsigned __int8)sub_8F4170(*(_QWORD *)(a1 + 568));
        if ( a3 )
        {
LABEL_34:
          v39 = (void *)sub_A16CE0(*(_QWORD *)(a1 + 584), v17);
          v19 = (unsigned __int8 **)sub_A2E1B0(a1 + 384, &v39, 2215, 0);
          v20 = v19;
          if ( v19 )
          {
            sub_8D6BF0(v19, 2);
            v21 = sub_A2CB40(a1 + 384);
            sub_8D6E40(v20, (*(_BYTE *)(v21 + 1) & 8) != 0);
          }
          else
          {
            sub_A2CB40(a1 + 384);
          }
        }
LABEL_36:
        v22 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
        *(_QWORD *)v22 = 0;
        *(_DWORD *)(v22 + 48) = 1;
        *(_QWORD *)(v22 + 32) = v18;
        *(_QWORD *)(v22 + 24) = a3;
        *(_OWORD *)(v22 + 8) = 0;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = *(_QWORD *)(a1 + 568);
        v7 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F5730((__int64)&v39, v6);
        if ( a3 )
        {
          v38 = sub_A16CE0(*(_QWORD *)(a1 + 584), v7);
          v8 = (unsigned __int8 **)sub_A2E1B0(a1 + 384, &v38, 2215, 0);
          v9 = v8;
          if ( v8 )
          {
            sub_8D6BF0(v8, 2);
            v10 = sub_A2CB40(a1 + 384);
            sub_8D6E40(v9, (*(_BYTE *)(v10 + 1) & 8) != 0);
          }
          else
          {
            sub_A2CB40(a1 + 384);
          }
        }
        v11 = v40;
        v12 = *(_QWORD *)(a1 + 568);
        v13 = v39;
        if ( v40 <= 0x40 )
        {
          v37 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          *(_QWORD *)v37 = 0;
          *(_DWORD *)(v37 + 48) = 1;
          *(_QWORD *)(v37 + 32) = v13 != nullptr;
          *(_QWORD *)(v37 + 24) = a3;
          *(_OWORD *)(v37 + 8) = 0;
        }
        else
        {
          v14 = sub_2587400(&v39);
          v15 = sub_A1A4E0(v12, 56);
          *(_QWORD *)v15 = 0;
          *(_DWORD *)(v15 + 48) = 1;
          *(_QWORD *)(v15 + 32) = v11 != v14;
          *(_QWORD *)(v15 + 24) = a3;
          *(_OWORD *)(v15 + 8) = 0;
          if ( v13 )
          {
            v16 = v13;
LABEL_49:
            operator delete[](v16);
          }
        }
      }
      break;
  }
  return 1;
}

