__int64 __fastcall sub_97BEB0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  char v6; // bp
  char v7; // al
  __int64 v8; // rdi
  bool v9; // zf
  bool v10; // sf
  bool v11; // of
  bool v12; // cc
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // al
  bool v15; // bl
  __int16 v16; // bp
  __int16 v17; // ax
  unsigned __int16 v18; // bp
  unsigned __int16 v19; // ax
  int v20; // ebp
  int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rbx
  __int64 v36; // rdx
  void *v37; // rax
  unsigned int v38; // eax
  bool v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rdi
  void *v42; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+8h] [rbp-60h]
  void *v44; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v6 = sub_915550(*(_QWORD *)(a1 + 568));
      v7 = sub_915550(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v11 = __OFSUB__(v7, v6);
      v9 = v7 == v6;
      v10 = (char)(v7 - v6) < 0;
      v12 = v7 < v6;
      goto LABEL_23;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v13 = sub_915900(*(_QWORD *)(a1 + 568));
      v14 = sub_915900(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v15 = 0;
      if ( v14 < v13 )
        goto LABEL_36;
      goto LABEL_35;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v16 = sub_915930(*(_QWORD *)(a1 + 568));
      v17 = sub_915930(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v11 = __OFSUB__(v17, v16);
      v9 = v17 == v16;
      v10 = (__int16)(v17 - v16) < 0;
      v12 = v17 < v16;
      goto LABEL_23;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v18 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v19 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v15 = 0;
      if ( v19 >= v18 )
        v15 = v18 < v19;
      goto LABEL_36;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v20 = sub_915D10(*(_QWORD *)(a1 + 568));
      v21 = sub_915D10(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v11 = __OFSUB__(v21, v20);
      v9 = v21 == v20;
      v10 = v21 - v20 < 0;
      v12 = v21 < v20;
      goto LABEL_23;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v22 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v23 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v15 = 0;
      if ( v23 >= v22 )
        v15 = v22 < v23;
      goto LABEL_36;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v24 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v25 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v11 = __OFSUB__(v25, v24);
      v9 = v25 == v24;
      v10 = v25 - v24 < 0;
      v12 = v25 < v24;
LABEL_23:
      v15 = !(v10 ^ v11 | v9);
      if ( v12 )
        v15 = 0;
      goto LABEL_36;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v26 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v27 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v15 = 0;
      if ( v27 >= v26 )
        v15 = v26 < v27;
      goto LABEL_36;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v28 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_919FD0((__int64)&v44, v28);
      sub_919FD0((__int64)&v42, *(_QWORD *)(a1 + 568));
      v29 = *(_QWORD *)(a1 + 568);
      v30 = sub_25867A0(&v42, &v44);
      goto LABEL_39;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v31 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_91A020((__int64)&v44, v31);
      sub_91A020((__int64)&v42, *(_QWORD *)(a1 + 568));
      v29 = *(_QWORD *)(a1 + 568);
      v30 = sub_2586820(&v42, &v44);
      goto LABEL_39;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 800) = *a3;
      v13 = sub_8F4170(*(_QWORD *)(a1 + 568));
      v14 = sub_8F4170(*(_QWORD *)(a1 + 568));
      v8 = *(_QWORD *)(a1 + 568);
      v15 = 0;
      if ( v14 >= v13 )
LABEL_35:
        v15 = v13 < v14;
LABEL_36:
      *(_BYTE *)sub_A1A4E0(v8, 8) = v15;
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v32 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v44, v32);
      sub_8F5730((__int64)&v42, *(_QWORD *)(a1 + 568));
      v29 = *(_QWORD *)(a1 + 568);
      v30 = sub_256EFC0(&v42, &v44);
LABEL_39:
      *(_BYTE *)sub_A1A4E0(v29, 8) = v30 > 0;
      if ( v43 > 0x40 && v42 )
        operator delete[](v42);
      if ( v45 > 0x40 && v44 )
        operator delete[](v44);
LABEL_3:
      result = 1;
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v33 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F4110((__int64)&v44, v33);
        v34 = *(_QWORD *)(a1 + 568);
        sub_8F4110((__int64)&v42, v34);
        v35 = *(_QWORD *)(a1 + 568);
        v37 = (void *)sub_2575D20(&v42, v34, v36);
        if ( v42 == v37 )
          v38 = sub_257E370(&v42, &v44);
        else
          v38 = sub_2577560(&v42, &v44);
        v39 = *((_BYTE *)&dword_3C9A374 + v38) == 3;
        *(_BYTE *)sub_A1A4E0(v35, 8) = v39;
        sub_5FF3B0((__int64 *)&v42);
        sub_5FF3B0((__int64 *)&v44);
      }
      goto LABEL_3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v40 = *(_QWORD *)(a1 + 792);
      v41 = a1 + 384;
      *(_QWORD *)(v41 + 416) = *a3;
      result = sub_9513F0(
                 v41,
                 v40,
                 (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_8CBE80,
                 (__int64)&v44);
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

