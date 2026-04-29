__int64 __fastcall sub_1E6820(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  int *v9; // rdi
  unsigned __int64 v10; // rbp
  _DWORD *v11; // rbx
  int v12; // r12d
  int v13; // ecx
  int v14; // edx
  __int64 (*v15)(); // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  int *v18; // rdi
  char v20; // al
  int v21; // [rsp+Ch] [rbp-5Ch]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v5 = 1;
  v24 = __readfsqword(0x28u);
  v23 = 0;
  if ( a3 != -1 )
    v5 = a3;
  v6 = a1[55] == 0;
  LODWORD(v23) = a2;
  v22 = 3;
  if ( v6 )
  {
LABEL_8:
    cleanup_argloc(&v22);
    LODWORD(v10) = -1;
    goto LABEL_9;
  }
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = (int *)(v7 + a1[54]);
    if ( !v9[23] )
    {
      if ( (unsigned __int8)sub_1BE260(v9, v9[22], (int *)&v22, v5) )
        break;
    }
    ++v8;
    v7 += 104;
    if ( v8 >= a1[55] )
      goto LABEL_8;
  }
  LODWORD(v10) = v8;
  cleanup_argloc(&v22);
  if ( (v8 & 0x80000000) != 0LL )
  {
LABEL_9:
    v11 = (_DWORD *)a1[188];
    if ( a3 >= v11[22] )
      return (unsigned int)v10;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 184LL))(a1[188], (unsigned int)a2);
    v13 = a2 - v12;
    v14 = *(unsigned __int8 *)(a1[187] + 130LL);
    if ( a3 >= v14 || a2 <= 7 )
    {
      if ( !v13 )
        return (unsigned int)v10;
    }
    else
    {
      v15 = *(__int64 (**)())(*(_QWORD *)v11 + 208LL);
      if ( v15 == sub_114D60
        || (v21 = *(unsigned __int8 *)(a1[187] + 130LL),
            v20 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))v15)(v11, (unsigned int)a2),
            v14 = v21,
            !v20) )
      {
        v23 = 0;
LABEL_14:
        v16 = 0;
        v10 = 0;
        v6 = a1[55] == 0;
        LODWORD(v23) = v12;
        LODWORD(v22) = 3;
        v17 = v14;
        if ( v6 )
        {
LABEL_18:
          LODWORD(v10) = -1;
        }
        else
        {
          while ( 1 )
          {
            v18 = (int *)(v16 + a1[54]);
            if ( !v18[23] )
            {
              if ( (unsigned __int8)sub_1BE260(v18, v18[22], (int *)&v22, v17) )
                break;
            }
            ++v10;
            v16 += 104;
            if ( v10 >= a1[55] )
              goto LABEL_18;
          }
        }
        cleanup_argloc(&v22);
        return (unsigned int)v10;
      }
      v13 = a2 - v12;
      if ( a2 == v12 )
        return (unsigned int)v10;
    }
    v14 = a3 + v13;
    v23 = 0;
    if ( a3 + v13 == -1 )
      v14 = 1;
    goto LABEL_14;
  }
  return (unsigned int)v10;
}
