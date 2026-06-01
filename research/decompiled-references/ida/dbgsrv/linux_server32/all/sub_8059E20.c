/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8059E20
// Address: 0x08059E20

//----- (08059E20) --------------------------------------------------------
int __cdecl sub_8059E20(td_thrhandle_t *th, int *a2)
{
  td_err_e info; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  char **v9; // ebp
  char *v10; // ecx
  char *v11; // eax
  const char *v12; // eax
  td_thrinfo_t infop; // [esp+1Ch] [ebp-2C0h] BYREF
  _BYTE v14[336]; // [esp+16Ch] [ebp-170h] BYREF
  unsigned int v15; // [esp+2BCh] [ebp-20h]

  v15 = __readgsdword(0x14u);
  info = td_thr_get_info(th, &infop);
  if ( info )
  {
    v12 = sub_8054990(info);
    if ( v15 == __readgsdword(0x14u) )
      sub_8058270((char *)&qword_811CFF4 - 273646, (char *)&qword_811CFF4 - 282061, v12, 0);
    goto LABEL_17;
  }
  if ( (infop.ti_state & 0xFFFFFFFB) != 1 )
  {
    v4 = *a2;
    v5 = *(_DWORD **)(*a2 + 664);
    if ( !v5 )
      goto LABEL_12;
    v6 = *a2 + 660;
    do
    {
      while ( 1 )
      {
        v7 = v5[2];
        v8 = v5[3];
        if ( infop.ti_lid <= v5[4] )
          break;
        v5 = (_DWORD *)v5[3];
        if ( !v8 )
          goto LABEL_10;
      }
      v6 = (int)v5;
      v5 = (_DWORD *)v5[2];
    }
    while ( v7 );
LABEL_10:
    v4 = *a2;
    if ( *a2 + 660 == v6 || infop.ti_lid < *(_DWORD *)(v6 + 16) )
    {
LABEL_12:
      sub_8059D50(v4, (int)&infop, th);
      qmemcpy(v14, &infop, sizeof(v14));
      v9 = (char **)a2[1];
      v10 = v9[1];
      v11 = *v9;
      if ( v9[2] < v10 + 1 )
      {
        v11 = (char *)sub_80CF920((int)v9, v11, (unsigned int)(v10 + 1), 0x150u);
        v10 = v9[1];
        *v9 = v11;
      }
      qmemcpy(&v11[336 * (_DWORD)v10], v14, 0x150u);
      ++v9[1];
    }
  }
  if ( v15 != __readgsdword(0x14u) )
LABEL_17:
    sub_80D7AB0();
  return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
