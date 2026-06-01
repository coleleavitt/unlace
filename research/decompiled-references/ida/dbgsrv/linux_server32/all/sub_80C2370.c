/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C2370
// Address: 0x080C2370

//----- (080C2370) --------------------------------------------------------
int __cdecl sub_80C2370(int **a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int *v9; // eax
  int v10; // edi
  int v12; // eax
  int v13; // [esp+8h] [ebp-D4h]
  int v14; // [esp+10h] [ebp-CCh]
  int v15; // [esp+14h] [ebp-C8h]
  _BYTE v16[128]; // [esp+3Ch] [ebp-A0h] BYREF
  unsigned int v17; // [esp+BCh] [ebp-20h]

  v17 = __readgsdword(0x14u);
  v4 = **a1;
  if ( a3 )
    v5 = (*(int (__cdecl **)(int *))(v4 + 16))(*a1);
  else
    v5 = (*(int (__cdecl **)(int *))(v4 + 20))(*a1);
  if ( !v5 )
    goto LABEL_22;
  v6 = ((int (__cdecl *)(int))(*a1)[18])(v5);
  if ( !v6 )
    goto LABEL_22;
  (*(void (__cdecl **)(int *, int, int))(**a1 + 24))(*a1, v6, 1459617792);
  if ( ((int (__cdecl *)(int, char *))(*a1)[19])(v6, (char *)&qword_811CFF4 - 261004) != 1 )
  {
LABEL_21:
    ((void (__cdecl *)(int))(*a1)[15])(v6);
LABEL_22:
    v6 = 0;
    goto LABEL_19;
  }
  if ( (dword_811F8A4 & 0x100000) != 0 )
  {
    v14 = (*(int (__cdecl **)(int *, int))(**a1 + 36))(*a1, v6);
    v15 = (*(int (__cdecl **)(int *, int))(**a1 + 40))(*a1, v14);
    sub_8058290();
    if ( v15 > 0 )
    {
      v7 = 0;
      do
      {
        v13 = v7++;
        v8 = (*(int (__cdecl **)(int *, int, int))(**a1 + 44))(*a1, v14, v13);
        ((void (__cdecl *)(int, _BYTE *, int))(*a1)[12])(v8, v16, 128);
        sub_8058290();
      }
      while ( v15 != v7 );
    }
    ((void (__cdecl *)(int, char *))(*a1)[20])(v6, (char *)&qword_811CFF4 - 377300);
  }
  v9 = *a1;
  if ( a3 )
  {
    if ( (unsigned int)v9[46] > 0x10001FF )
    {
      (*(void (__cdecl **)(int *, int, int))(*v9 + 32))(v9, v6, 1);
      if ( (dword_811F8A4 & 0x100000) == 0 )
        goto LABEL_14;
    }
    else
    {
      v10 = ((int (__cdecl *)(int))v9[8])(415);
      (*(void (__cdecl **)(int *, int, int))(**a1 + 28))(*a1, v6, v10);
      ((void (__cdecl *)(int))(*a1)[7])(v10);
      if ( (dword_811F8A4 & 0x100000) == 0 )
      {
LABEL_14:
        if ( ((int (__cdecl *)(int, int))(*a1)[22])(v6, a3) == 1 )
        {
          if ( (dword_811F8A4 & 0x100000) != 0 )
            sub_80BE360();
          if ( ((int (__cdecl *)(int, int, int))(*a1)[21])(v6, a4, 1) == 1 && ((int (__cdecl *)(int))(*a1)[13])(v6) == 1 )
            goto LABEL_19;
        }
        goto LABEL_21;
      }
    }
    sub_80BE360();
    goto LABEL_14;
  }
  v12 = ((int (__cdecl *)(int))v9[16])(v6);
  if ( ((int (__cdecl *)(int, int))(*a1)[41])(v12, a2) != 1 && (dword_811F8A4 & 0x100000) != 0 )
    sub_80BE360();
LABEL_19:
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v6;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A4: using guessed type int dword_811F8A4;
