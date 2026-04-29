__int64 __fastcall sub_267BD0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  _QWORD *v10; // rax
  unsigned int v13; // r11d
  unsigned int v14; // r13d
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rdi
  unsigned int v19; // r14d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rdi
  int v29; // r14d
  unsigned int v30; // r14d
  int v31; // r13d
  int v32; // r13d
  char *v33; // r8
  unsigned int v34; // eax
  int v35; // edx
  __int64 v36; // r13
  signed int v37; // r15d
  __int64 v38; // r13
  __int64 v39; // rdi
  int v40; // eax
  const char *v41; // rdx
  char v42; // [rsp+7h] [rbp-61h]
  __int64 v43; // [rsp+10h] [rbp-58h] BYREF
  __int128 v44; // [rsp+18h] [rbp-50h]
  unsigned __int64 v45; // [rsp+28h] [rbp-40h]

  v10 = *(_QWORD **)a4;
  v45 = __readfsqword(0x28u);
  if ( ((unsigned __int8 (__fastcall *)(__int64))v10[1])(a4)
    || !(unsigned __int8)sub_268270(a1, a2, a3, a5, a6, *(_QWORD *)(a4 + 40)) )
  {
    return sub_266670(a1, a2, a3, (_QWORD **)a4, a5);
  }
  if ( *(_DWORD *)(a1 + 12) != -1 )
    sub_2651E0(a1, a2, (_QWORD *)a4);
  v42 = sub_25F780(a1, *(_DWORD *)(a1 + 8), a5);
  if ( v42 )
  {
    v14 = a3 + 1;
    (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, 0, &unk_4131C1);
    v13 = *(_DWORD *)(a1 + 8);
    switch ( v13 )
    {
      case 1u:
        goto LABEL_19;
      case 0x10u:
        goto LABEL_17;
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
        goto LABEL_8;
      case 0x39u:
        goto LABEL_25;
      case 0x3Fu:
        goto LABEL_24;
      case 0x40u:
        goto LABEL_20;
      default:
        goto LABEL_14;
    }
  }
  v14 = a3;
  switch ( v13 )
  {
    case 1u:
LABEL_19:
      v22 = sub_267BD0(*(_QWORD *)(a1 + 24), a2, v14, a4, a1, 1);
      sub_262B00((void **)a1, a2, v22, 0, ",", (_QWORD *)a4, 0);
      sub_263480((_QWORD *)a1, a4, v14, 1u);
      (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v14, &unk_412793);
      sub_265960((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4, a1);
      goto LABEL_11;
    case 0x10u:
LABEL_17:
      v19 = v14 - 2;
      v20 = sub_267BD0(*(_QWORD *)(a1 + 24), a2, v14, a4, a1, 16);
      sub_262B00(*(void ***)(a1 + 32), a2, v20, 0, (char *)&unk_412793, (_QWORD *)a4, 0);
      sub_263480(*(_QWORD **)(a1 + 32), a4, v14 - 2, 1u);
      if ( (unsigned int)sub_262680(
                           a1,
                           v14 - 2,
                           (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
                           1u) != v14 )
      {
        if ( !under_debugger )
          sub_3835A0(52601);
LABEL_38:
        BUG();
      }
      v21 = sub_267BD0(*(_QWORD *)(a1 + 32), a2, v14, a4, a1, *(unsigned int *)(a1 + 8));
      sub_262B00(*(void ***)(a1 + 40), a2, v21, 0, (char *)&unk_412793, (_QWORD *)a4, 0);
      sub_263480(*(_QWORD **)(a1 + 40), a4, v19, 1u);
      (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v19, &unk_4131DF);
      v18 = *(_QWORD *)(a1 + 40);
LABEL_12:
      v14 = sub_267BD0(v18, a2, v14, a4, a1, *(unsigned int *)(a1 + 8));
LABEL_13:
      if ( v42 )
      {
LABEL_14:
        ++v14;
        (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, 0, &unk_413198);
      }
      return v14;
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x28u:
    case 0x29u:
    case 0x2Au:
    case 0x2Bu:
    case 0x2Cu:
    case 0x2Du:
LABEL_8:
      v15 = sub_267BD0(*(_QWORD *)(a1 + 24), a2, v14, a4, a1, v13);
      v16 = 0;
      if ( *(_BYTE *)(a4 + 48) == 41 )
        v16 = 72;
      sub_262B00((void **)a1, a2, v15, 0, (char *)&unk_412793, (_QWORD *)a4, v16);
      v17 = v14 - 1 - strlen((const char *)*(&off_4DA9E0 + 2 * *(int *)(a1 + 8)));
      sub_263480((_QWORD *)a1, a4, v17, 1u);
      if ( (unsigned int)sub_262680(
                           a1,
                           v17,
                           (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
                           1u) == v14 )
      {
LABEL_11:
        v18 = *(_QWORD *)(a1 + 32);
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_3835A0(50122);
      goto LABEL_38;
    case 0x39u:
LABEL_25:
      v28 = *(_QWORD *)(a1 + 24);
      v29 = *(_DWORD *)(a2 + 592);
      v43 = -1;
      *(_QWORD *)&v44 = 0xFFFFFFFF00000002LL;
      v30 = v14 + v29;
      DWORD2(v44) = -1;
      v31 = sub_267BD0(v28, a2, v14, a4, a1, 0);
      v32 = sub_262680(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0) + v31;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) )
      {
        v33 = (char *)&unk_412793;
        v34 = 65;
        v35 = v32;
        v36 = 0;
        v37 = 0;
        do
        {
          ++v37;
          v38 = 72 * v36;
          sub_262B00((void **)a1, a2, v35, 0, v33, (_QWORD *)a4, v34);
          sub_263480((_QWORD *)(v38 + **(_QWORD **)(a1 + 32)), a4, v30, 1u);
          (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, v30, &unk_412793);
          v39 = v38 + **(_QWORD **)(a1 + 32);
          v36 = v37;
          v40 = sub_267BD0(v39, a2, v30, a4, &v43, 0);
          v33 = (char *)&unk_4131ED;
          v35 = v40;
          v34 = v37;
        }
        while ( (unsigned __int64)v37 < *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) );
        v32 = v35;
      }
      v14 = v32 + 1;
      (**(void (__fastcall ***)(__int64, _QWORD, void *))a4)(a4, 0, &unk_413198);
      goto LABEL_13;
    case 0x3Fu:
LABEL_24:
      sub_2630A0((void **)a1, a2, *(const char **)(a1 + 24), 1, v14, (_QWORD *)a4);
      goto LABEL_13;
    case 0x40u:
LABEL_20:
      v23 = *(_QWORD *)(a4 + 40);
      v24 = *(_QWORD *)(a1 + 24);
      v43 = 0;
      v25 = *(_QWORD *)(v23 + 216);
      v44 = 0;
      v26 = sub_261FB0(*(_QWORD *)(v25 + 112), &v43, v24, 0, nullptr, 5u);
      v27 = v43;
      if ( !v26 )
      {
        if ( v43 )
          qfree(v43);
        a3 = v14;
        return sub_266670(a1, a2, a3, (_QWORD **)a4, a5);
      }
      v41 = (const char *)v43;
      if ( !(_QWORD)v44 )
        v41 = s1;
      sub_2630A0((void **)a1, a2, v41, v26, v14, (_QWORD *)a4);
      if ( v27 )
        qfree(v27);
      goto LABEL_13;
    default:
      return v14;
  }
}
