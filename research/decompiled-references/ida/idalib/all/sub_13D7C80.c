__int64 __fastcall sub_13D7C80(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 *a4)
{
  _BYTE *v8; // rbp
  bool v9; // zf
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // ebp
  char *v22; // r15
  unsigned int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE *v27; // rsi
  int v28; // edx
  __int64 v29; // rdi
  __int64 (__fastcall **v30)(); // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rdx
  char v34; // [rsp+Fh] [rbp-69h] BYREF
  __int64 (__fastcall **v35)(); // [rsp+10h] [rbp-68h]
  int v36; // [rsp+18h] [rbp-60h]
  unsigned __int64 v37; // [rsp+1Ch] [rbp-5Ch]
  int v38; // [rsp+24h] [rbp-54h]
  unsigned __int64 v39; // [rsp+28h] [rbp-50h]
  int v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+34h] [rbp-44h] BYREF
  int v42; // [rsp+3Ch] [rbp-3Ch]

  v8 = *(_BYTE **)(a1 + 136);
  v34 = 0;
  if ( (v8[4] & 2) != 0 )
    goto LABEL_14;
  if ( (*(_WORD *)v8 & 0x808) == 0 )
  {
    if ( sub_13D34C0(a3, v8, &v34) )
    {
      v9 = (*v8 & 2) == 0;
      LODWORD(v41) = a3;
      if ( v9
         ? !sub_13D2FE0(&byte_2611890[-112], byte_2611890, &v41)
         : !sub_13D2FE0(&byte_26118C0[-32], byte_26118C0, &v41) )
      {
        goto LABEL_7;
      }
    }
LABEL_14:
    v22 = *(char **)(a1 + 152);
    if ( *(_BYTE *)(a1 + 26)
      || *(_BYTE *)(a1 + 24)
      || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 545LL) & 2) != 0
      || *v22 >= 0
      || (LODWORD(v41) = a3, LOBYTE(v24) = sub_13D2FE0(&byte_2611808[-72], byte_2611808, &v41), v21 = v24, (_BYTE)v24) )
    {
      v21 = 1;
      *(_WORD *)(a1 + 32) = 1;
      *(_DWORD *)(a2 + 4) = (_DWORD)a4 - (_DWORD)v22;
      *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)a4 - (int)v22);
      *(_WORD *)(a2 + 16) = 0;
      *(_QWORD *)(a1 + 152) = a4;
    }
    else
    {
      v25 = sub_13D08D0(a1, (int)v22, (int)a4);
      v26 = *(_QWORD *)(a1 + 8);
      v27 = *(_BYTE **)(a1 + 136);
      v42 = v28;
      v29 = *(_QWORD *)(v26 + 48);
      v41 = v25;
      sub_13D5670(v29, v27, a3, v25, v28, 1);
      *(_QWORD *)(a1 + 152) = a4;
    }
    return v21;
  }
  LODWORD(v41) = a3;
  if ( !sub_13D2FE0((char *)&jpt_13DFAB7[-1334], (char *)jpt_13DFAB7, &v41) )
  {
    if ( !sub_13D2FE0(&byte_26122A8[-104], byte_26122A8, &v41) )
      goto LABEL_14;
    v34 = 1;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 26) && !*(_BYTE *)(a1 + 24) && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 545LL) & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    if ( v34 )
    {
      v30 = (__int64 (__fastcall **)())sub_13D08D0(a1, v11, (int)a4);
      v36 = v31;
      v32 = v31;
      v33 = *(_QWORD *)(a1 + 8);
      v35 = v30;
      sub_13D0970(*(_QWORD *)(v33 + 48), a3, v30, v32);
      v11 = *(_QWORD *)(a1 + 152);
    }
    v12 = sub_13D08D0(a1, v11, (int)a4);
    v14 = v13;
    v38 = v13;
    v15 = *(_QWORD *)(a1 + 8);
    v37 = v12;
    sub_13D3040(*(_QWORD *)(v15 + 48), a3, v12, v14, 1, v16);
    v17 = sub_13D08D0(a1, *(_QWORD *)(a1 + 152), (int)a4);
    v40 = v18;
    v19 = v18;
    v20 = *(_QWORD *)(a1 + 8);
    v39 = v17;
    sub_13D0D30(*(_QWORD *)(v20 + 48), a3, v17, v19);
  }
  *(_WORD *)(a1 + 32) = 1;
  return (unsigned int)sub_13D79E0(a1, a2, a4);
}
