__int64 __fastcall sub_D4F080(__int64 a1, int a2, __int64 *a3, int a4, _QWORD *a5)
{
  unsigned int v7; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r15
  char v14; // al
  __int64 v15; // r14
  int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // r15
  char v21; // al
  __int64 v22; // r14
  int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // r15
  char v28; // al
  __int64 v29; // r14
  int v30; // ebx
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // r15
  char v35; // al
  __int64 v36; // r14
  __int64 v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // r15
  char v40; // al
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  void *v45; // rbx
  int v46; // edx
  int v47; // r12d
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // r15
  char v51; // al
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rbx
  int v57; // edx
  int v58; // r12d
  __int64 v59; // r15
  char v60; // al
  __int64 v61; // r14
  char v62; // bl
  __int64 v63; // [rsp+20h] [rbp-78h] BYREF
  __int64 v64; // [rsp+28h] [rbp-70h]
  _BYTE v65[104]; // [rsp+30h] [rbp-68h] BYREF

  v7 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 1232);
        v12 = a1 + 384;
        *(_QWORD *)(v12 + 856) = *a5;
        v7 = sub_D22870(v12, v11, a3, a4);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v15 = *(_QWORD *)(a1 + 784);
        if ( v14 && !*(_DWORD *)(v15 + 24) )
          goto LABEL_53;
        v7 = sub_DCA720(a1 + 384, v13, v15 + 40);
        if ( !(_BYTE)v7 )
          goto LABEL_53;
        sub_E23220(
          v65,
          *(_QWORD *)(v15 + 72),
          (unsigned int)(a4 + *(_DWORD *)(v15 + 40)),
          (unsigned int)(a4 + *(_DWORD *)(v15 + 40)));
        v16 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v17 = sub_B78170(*a3);
        if ( v17 <= 7 )
          v16 &= (1 << v17) - 1;
        *(_BYTE *)sub_D0C7E0((__int64)v65) = v16;
        sub_E24D00(v65);
        sub_E232A0(v65);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        v19 = a1 + 384;
        *(_QWORD *)(v19 + 856) = *a5;
        v7 = sub_D23480(v19, v18, a3, a4);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v22 = *(_QWORD *)(a1 + 784);
        if ( v21 && !*(_DWORD *)(v22 + 24) )
          goto LABEL_53;
        v7 = sub_DCA720(a1 + 384, v20, v22 + 40);
        if ( !(_BYTE)v7 )
          goto LABEL_53;
        sub_E23220(
          v65,
          *(_QWORD *)(v22 + 72),
          (unsigned int)(a4 + *(_DWORD *)(v22 + 40)),
          (unsigned int)(a4 + *(_DWORD *)(v22 + 40)));
        v23 = sub_D23A90(*(_QWORD *)(a1 + 560));
        v24 = sub_B78170(*a3);
        if ( v24 <= 0xF )
          v23 &= (1 << v24) - 1;
        *(_WORD *)sub_D0CDE0((__int64)v65) = v23;
        sub_E24D00(v65);
        sub_E232A0(v65);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 1232);
        v26 = a1 + 384;
        *(_QWORD *)(v26 + 856) = *a5;
        v7 = sub_D23CB0(v26, v25, a3, a4);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v27 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v29 = *(_QWORD *)(a1 + 784);
        if ( v28 && !*(_DWORD *)(v29 + 24) )
          goto LABEL_53;
        v7 = sub_DCA720(a1 + 384, v27, v29 + 40);
        if ( !(_BYTE)v7 )
          goto LABEL_53;
        sub_E23220(
          v65,
          *(_QWORD *)(v29 + 72),
          (unsigned int)(a4 + *(_DWORD *)(v29 + 40)),
          (unsigned int)(a4 + *(_DWORD *)(v29 + 40)));
        v30 = sub_D242B0(*(_QWORD *)(a1 + 560));
        v31 = sub_B78170(*a3);
        if ( v31 <= 0x1F )
          v30 &= ~(-1 << v31);
        *(_DWORD *)sub_D0D3E0((__int64)v65) = v30;
        sub_E24D00(v65);
        sub_E232A0(v65);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v32 = *(_QWORD *)(a1 + 1232);
        v33 = a1 + 384;
        *(_QWORD *)(v33 + 856) = *a5;
        v7 = sub_D244D0(v33, v32, a3, a4);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v34 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v36 = *(_QWORD *)(a1 + 784);
        if ( v35 && !*(_DWORD *)(v36 + 24) )
          goto LABEL_53;
        v7 = sub_DCA720(a1 + 384, v34, v36 + 40);
        if ( !(_BYTE)v7 )
          goto LABEL_53;
        sub_E23220(
          v65,
          *(_QWORD *)(v36 + 72),
          (unsigned int)(a4 + *(_DWORD *)(v36 + 40)),
          (unsigned int)(a4 + *(_DWORD *)(v36 + 40)));
        v37 = sub_D24B00(*(_QWORD *)(a1 + 560));
        v38 = sub_B78170(*a3);
        if ( v38 <= 0x3F )
          v37 &= ~(-1LL << v38);
        *(_QWORD *)sub_D0DBD0((__int64)v65) = v37;
        sub_E24D00(v65);
        sub_E232A0(v65);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v39 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v41 = *(_QWORD *)(a1 + 784);
        if ( !v40 || *(_DWORD *)(v41 + 24) )
        {
          v7 = sub_DCA720(a1 + 384, v39, v41 + 40);
          if ( (_BYTE)v7 )
          {
            sub_E23220(
              v65,
              *(_QWORD *)(v41 + 72),
              (unsigned int)(a4 + *(_DWORD *)(v41 + 40)),
              (unsigned int)(a4 + *(_DWORD *)(v41 + 40)));
            v42 = sub_D25090(*(_QWORD *)(a1 + 560));
            v43 = *a3;
            v64 = v44;
            v63 = v42;
            sub_B78170(v43);
            v45 = sub_D4A0D0((__int64)&v63);
            v47 = v46;
            v48 = sub_D0E1E0((__int64)v65);
            *(_QWORD *)v48 = v45;
            v49 = v47;
            goto LABEL_52;
          }
        }
        goto LABEL_53;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v50 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v52 = *(_QWORD *)(a1 + 784);
        if ( v51 && !*(_DWORD *)(v52 + 24) )
          goto LABEL_53;
        v7 = sub_DCA720(a1 + 384, v50, v52 + 40);
        if ( !(_BYTE)v7 )
          goto LABEL_53;
        sub_E23220(
          v65,
          *(_QWORD *)(v52 + 72),
          (unsigned int)(a4 + *(_DWORD *)(v52 + 40)),
          (unsigned int)(a4 + *(_DWORD *)(v52 + 40)));
        v53 = sub_D251C0(*(_QWORD *)(a1 + 560));
        v54 = *a3;
        v64 = v55;
        v63 = v53;
        sub_B78170(v54);
        v56 = sub_D4E8C0((__int64)&v63);
        v58 = v57;
        v48 = sub_D0E230((__int64)v65);
        *(_QWORD *)v48 = v56;
        v49 = v58;
LABEL_52:
        *(_DWORD *)(v48 + 8) = v49;
        sub_E24D00(v65);
        sub_E232A0(v65);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v59 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a5;
        v60 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 24LL))(*(_QWORD *)(a1 + 408));
        v61 = *(_QWORD *)(a1 + 784);
        if ( (!v60 || *(_DWORD *)(v61 + 24)) && (v7 = sub_DCA720(a1 + 384, v59, v61 + 40), (_BYTE)v7) )
        {
          sub_E23220(
            v65,
            *(_QWORD *)(v61 + 72),
            (unsigned int)(a4 + *(_DWORD *)(v61 + 40)),
            (unsigned int)(a4 + *(_DWORD *)(v61 + 40)));
          v62 = sub_D08FE0(*(_QWORD *)(a1 + 560));
          sub_B78170(*a3);
          *(_BYTE *)sub_D0E7B0((__int64)v65) = v62;
          sub_E24D00(v65);
          sub_E232A0(v65);
        }
        else
        {
LABEL_53:
          v7 = 0;
        }
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(a1 + 1232);
        v10 = a1 + 384;
        *(_QWORD *)(v10 + 856) = *a5;
        v7 = sub_D1B2A0(v10, v9, a3, a4);
      }
      break;
  }
  return v7;
}
