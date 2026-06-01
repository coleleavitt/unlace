__int64 __fastcall sub_D32590(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int8 **v9; // rax
  unsigned __int8 **v10; // r13
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // ebx
  bool v14; // bl
  __int64 v15; // rax
  bool v16; // cc
  __int64 v17; // r13
  __int64 v18; // r12
  unsigned __int8 v19; // al
  unsigned __int8 **v20; // rax
  unsigned __int8 **v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  void *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int8 **v28; // rax
  unsigned __int8 **v29; // r12
  __int64 v30; // rax
  __int64 v31; // r12
  void *v32; // rax
  __int64 v33; // r12
  void *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  unsigned __int8 **v37; // rax
  unsigned __int8 **v38; // r12
  __int64 v39; // rax
  void *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // [rsp+8h] [rbp-50h] BYREF
  void *v43; // [rsp+10h] [rbp-48h] BYREF
  __int64 v44; // [rsp+18h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = (char)sub_D22760(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v19 = sub_D22E60(*(_QWORD *)(a1 + 560));
        goto LABEL_16;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = (__int16)sub_D23370(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = (unsigned __int16)sub_D23A90(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = (int)sub_D23BA0(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = (unsigned int)sub_D242B0(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = sub_D243C0(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v18 = sub_D24B00(*(_QWORD *)(a1 + 560));
        goto LABEL_29;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v24 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v25 = (void *)sub_D25090(*(_QWORD *)(a1 + 560));
        v26 = *(_QWORD *)(a1 + 784);
        v44 = v27;
        v43 = v25;
        v42 = sub_E1EEA0(v26, v24);
        v28 = (unsigned __int8 **)sub_E33D20(a1 + 384, &v42, 2417, 0);
        v29 = v28;
        if ( v28 )
        {
          sub_AE9DF0(v28, 2, 2u);
          v30 = sub_E32240(a1 + 384);
          sub_AE9DF0(v29, (*(_BYTE *)(v30 + 1) & 8) != 0, 3u);
        }
        else
        {
          sub_E32240(a1 + 384);
        }
        v31 = *(_QWORD *)(a1 + 560);
        v32 = sub_D2F500((__int64)&v43);
        goto LABEL_40;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v33 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v34 = (void *)sub_D251C0(*(_QWORD *)(a1 + 560));
        v35 = *(_QWORD *)(a1 + 784);
        v44 = v36;
        v43 = v34;
        v42 = sub_E1EEA0(v35, v33);
        v37 = (unsigned __int8 **)sub_E33D20(a1 + 384, &v42, 2417, 0);
        v38 = v37;
        if ( v37 )
        {
          sub_AE9DF0(v37, 2, 2u);
          v39 = sub_E32240(a1 + 384);
          sub_AE9DF0(v38, (*(_BYTE *)(v39 + 1) & 8) != 0, 3u);
        }
        else
        {
          sub_E32240(a1 + 384);
        }
        v31 = *(_QWORD *)(a1 + 560);
        v32 = sub_D2F680((__int64)&v43);
LABEL_40:
        v40 = v32;
        v41 = sub_E216C0(v31, 48);
        *(_QWORD *)v41 = 0;
        *(_OWORD *)(v41 + 8) = 0;
        *(_DWORD *)(v41 + 24) = 1;
        *(_QWORD *)(v41 + 40) = v40;
        *(_QWORD *)(v41 + 32) = a3;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v19 = sub_D08FE0(*(_QWORD *)(a1 + 560));
LABEL_16:
        v18 = v19;
LABEL_29:
        v43 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 784), v17);
        v20 = (unsigned __int8 **)sub_E33D20(a1 + 384, &v43, 2417, 0);
        v21 = v20;
        if ( v20 )
        {
          sub_AE9DF0(v20, 2, 2u);
          v22 = sub_E32240(a1 + 384);
          sub_AE9DF0(v21, (*(_BYTE *)(v22 + 1) & 8) != 0, 3u);
        }
        else
        {
          sub_E32240(a1 + 384);
        }
        v23 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
        *(_QWORD *)v23 = 0;
        *(_OWORD *)(v23 + 8) = 0;
        *(_DWORD *)(v23 + 24) = 1;
        *(_QWORD *)(v23 + 40) = v18;
        *(_QWORD *)(v23 + 32) = a3;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_D0AF80((__int64)&v43, v7);
        v42 = sub_E1EEA0(*(_QWORD *)(a1 + 784), v8);
        v9 = (unsigned __int8 **)sub_E33D20(a1 + 384, &v42, 2417, 0);
        v10 = v9;
        if ( v9 )
        {
          sub_AE9DF0(v9, 2, 2u);
          v11 = sub_E32240(a1 + 384);
          sub_AE9DF0(v10, (*(_BYTE *)(v11 + 1) & 8) != 0, 3u);
        }
        else
        {
          sub_E32240(a1 + 384);
        }
        v12 = *(_QWORD *)(a1 + 560);
        v13 = v44;
        v14 = (unsigned int)v44 <= 0x40 ? v43 == nullptr : v13 == (unsigned int)sub_2206780(&v43);
        v15 = sub_E216C0(v12, 48);
        *(_QWORD *)(v15 + 40) = !v14;
        *(_QWORD *)(v15 + 32) = a3;
        v16 = (unsigned int)v44 <= 0x40;
        *(_QWORD *)v15 = 0;
        *(_OWORD *)(v15 + 8) = 0;
        *(_DWORD *)(v15 + 24) = 1;
        if ( !v16 )
        {
          if ( v43 )
            operator delete[](v43);
        }
      }
      break;
  }
  return 1;
}
