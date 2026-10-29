__int64 __fastcall sub_97B960(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  char v6; // bp
  char v7; // al
  bool v8; // sf
  bool v9; // of
  unsigned __int8 v10; // bp
  bool v11; // cf
  __int16 v12; // bp
  __int16 v13; // ax
  unsigned __int16 v14; // bp
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // r13
  int v23; // eax
  __int64 v24; // rsi
  unsigned __int8 v25; // bp
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  void *v31; // rax
  unsigned int v32; // eax
  char v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rdi
  void *v36; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+8h] [rbp-60h]
  void *v38; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v6 = sub_915550(*(_QWORD *)(a1 + 568));
      v7 = sub_915550(*(_QWORD *)(a1 + 568));
      v9 = __OFSUB__(v7, v6);
      v8 = (char)(v7 - v6) < 0;
      goto LABEL_20;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v10 = sub_915900(*(_QWORD *)(a1 + 568));
      v11 = (unsigned __int8)sub_915900(*(_QWORD *)(a1 + 568)) < v10;
      goto LABEL_29;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v12 = sub_915930(*(_QWORD *)(a1 + 568));
      v13 = sub_915930(*(_QWORD *)(a1 + 568));
      v9 = __OFSUB__(v13, v12);
      v8 = (__int16)(v13 - v12) < 0;
      goto LABEL_20;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v14 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v11 = (unsigned __int16)sub_915CE0(*(_QWORD *)(a1 + 568)) < v14;
      goto LABEL_29;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v15 = sub_915D10(*(_QWORD *)(a1 + 568));
      v16 = sub_915D10(*(_QWORD *)(a1 + 568));
      v9 = __OFSUB__(v16, v15);
      v8 = v16 - v15 < 0;
      goto LABEL_20;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v17 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v11 = (unsigned int)sub_9160C0(*(_QWORD *)(a1 + 568)) < v17;
      goto LABEL_29;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v18 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v19 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v9 = __OFSUB__(v19, v18);
      v8 = v19 - v18 < 0;
LABEL_20:
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v8 == v9;
      goto LABEL_3;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v20 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v11 = sub_9164A0(*(_QWORD *)(a1 + 568)) < v20;
      goto LABEL_29;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v21 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_919FD0((__int64)&v38, v21);
      sub_919FD0((__int64)&v36, *(_QWORD *)(a1 + 568));
      v22 = *(_QWORD *)(a1 + 568);
      v23 = sub_25867A0(&v36, &v38);
      goto LABEL_32;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)&v38, v24);
      sub_91A020((__int64)&v36, *(_QWORD *)(a1 + 568));
      v22 = *(_QWORD *)(a1 + 568);
      v23 = sub_2586820(&v36, &v38);
      goto LABEL_32;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v25 = sub_8F4170(*(_QWORD *)(a1 + 568));
      v11 = (unsigned __int8)sub_8F4170(*(_QWORD *)(a1 + 568)) < v25;
LABEL_29:
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = !v11;
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v38, v26);
      sub_8F5730((__int64)&v36, *(_QWORD *)(a1 + 568));
      v22 = *(_QWORD *)(a1 + 568);
      v23 = sub_256EFC0(&v36, &v38);
LABEL_32:
      *(_BYTE *)sub_A1A4E0(v22, 8) = v23 >= 0;
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
      if ( v39 > 0x40 )
      {
        if ( v38 )
          operator delete[](v38);
      }
LABEL_3:
      result = 1;
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v27 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4110((__int64)&v38, v27);
        v28 = *(_QWORD *)(a1 + 568);
        sub_8F4110((__int64)&v36, v28);
        v29 = *(_QWORD *)(a1 + 568);
        v31 = (void *)sub_2575D20(&v36, v28, v30);
        if ( v36 == v31 )
          v32 = sub_257E370(&v36, &v38);
        else
          v32 = sub_2577560(&v36, &v38);
        v33 = *((_BYTE *)&dword_3C9A374 + v32);
        *(_BYTE *)sub_A1A4E0(v29, 8) = v33 == 0 || v33 == 3;
        sub_5FF3B0((__int64 *)&v36);
        sub_5FF3B0((__int64 *)&v38);
      }
      goto LABEL_3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v34 = *(_QWORD *)(a1 + 792);
      v35 = a1 + 384;
      *(_QWORD *)(v35 + 416) = *a3;
      result = sub_9513F0(
                 v35,
                 v34,
                 (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_8CBDA0,
                 (__int64)&v38);
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v4 = *(_QWORD *)(a1 + 792);
      v5 = (_QWORD *)(a1 + 384);
      v5[52] = *a3;
      sub_97B630(v5, v4);
      result = 0;
      break;
  }
  return result;
}

