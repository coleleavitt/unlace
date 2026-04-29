__int64 __fastcall sub_333EB0(_QWORD *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, int *a5)
{
  int v5; // eax
  char v8; // dl
  char *v11; // rdi
  char v12; // dl
  unsigned __int64 v13; // rax
  char v14; // al
  char v15; // al
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // al
  char v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *a5;
  v23[1] = __readfsqword(0x28u);
  v22 = 0;
  v23[0] = 0;
  if ( (unsigned int)(v5 - 12) > 1 )
    return 0;
  v8 = *((_BYTE *)a5 + 32);
  if ( v8 == 1 )
  {
    v21 = a4;
    v14 = sub_333DF0(&v22, a2, a3, a4, a5[10]);
    a4 = v21;
    if ( !v14 )
    {
LABEL_19:
      v5 = *a5;
      goto LABEL_20;
    }
LABEL_12:
    v15 = *((_BYTE *)a5 + 48);
    if ( v15 == 2 )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a5 + 7) + 16LL);
      goto LABEL_17;
    }
    if ( v15 == 10 )
    {
      v16 = *((_QWORD *)a5 + 7);
      if ( *(_BYTE *)v16 == 6 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( !a3 || v17 < a3[16] )
        {
LABEL_17:
          if ( *a5 == 13 )
            v17 = -(__int64)v17;
          goto LABEL_29;
        }
      }
    }
    goto LABEL_19;
  }
  if ( v8 == 10 )
  {
    v11 = *((char **)a5 + 5);
    v12 = *v11;
    if ( *v11 != 5 )
    {
      if ( v5 != 12 )
        return 0;
      goto LABEL_7;
    }
    v22 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL);
    goto LABEL_12;
  }
LABEL_20:
  if ( v5 != 12 )
    return 0;
  v18 = *((_BYTE *)a5 + 32);
  if ( v18 == 2 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)a5 + 5) + 16LL);
    goto LABEL_25;
  }
  if ( v18 != 10 )
    return 0;
  v11 = *((char **)a5 + 5);
  v12 = *v11;
LABEL_7:
  if ( v12 != 6 )
    return 0;
  v13 = *((_QWORD *)v11 + 1);
  if ( a3 )
  {
    if ( v13 >= a3[16] )
      return 0;
  }
LABEL_25:
  v22 = v13;
  v19 = *((_BYTE *)a5 + 48);
  if ( v19 == 1 )
  {
    if ( (unsigned __int8)sub_333DF0(v23, a2, a3, a4, a5[14]) )
    {
      v17 = v23[0];
      goto LABEL_17;
    }
    return 0;
  }
  if ( v19 != 10 )
    return 0;
  v20 = *((_QWORD *)a5 + 7);
  if ( *(_BYTE *)v20 != 5 )
    return 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL);
LABEL_29:
  *a1 = v22 + v17;
  return 1;
}
