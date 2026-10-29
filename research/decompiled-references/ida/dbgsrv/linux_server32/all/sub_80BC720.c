/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC720
// Address: 0x080BC720

//----- (080BC720) --------------------------------------------------------
// bad sp value at call has been detected, the output may be wrong!
int __cdecl sub_80BC720(int a1, int a2, int a3, int a4)
{
  int (__cdecl *v4)(int); // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int (*v8)(); // edx
  const char *v9; // eax
  const char *v10; // edi
  size_t v11; // eax
  int v12; // edi
  unsigned int v14; // edx
  void *v15; // eax
  int v17; // [esp+8h] [ebp-30h]
  unsigned int v18; // [esp+8h] [ebp-30h]
  size_t n; // [esp+Ch] [ebp-2Ch]
  size_t na; // [esp+Ch] [ebp-2Ch]
  int v21; // [esp+18h] [ebp-20h] BYREF
  unsigned int v22; // [esp+1Ch] [ebp-1Ch]
  int v23; // [esp+20h] [ebp-18h]
  int v24; // [esp+24h] [ebp-14h]

  v22 = __readgsdword(0x14u);
  v4 = *(int (__cdecl **)(int))(*(_DWORD *)a1 + 12);
  if ( v4 == sub_80BC3C0 )
    v5 = *(_DWORD *)(a1 + 52);
  else
    v5 = v4(a1);
  sub_80BC210(&v21, v5, 1u, a3);
  if ( !a3 )
  {
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  do
  {
    while ( 1 )
    {
      v23 = a4;
      if ( sub_80BBF60(v5) <= 0 )
        break;
      v24 = a3;
      v23 = a2;
      v6 = sub_80BBF30(v5);
      n = v6;
      if ( v6 <= 0 )
        goto LABEL_6;
      a3 -= v6;
      a2 += v6;
      v23 = v6;
      sub_80BC260(&v21);
      if ( !a3 )
        goto LABEL_17;
    }
    n = -1;
LABEL_6:
    v7 = sub_80BBF40(v5);
  }
  while ( v7 == -21015 );
  v8 = *(int (**)())(*(_DWORD *)a1 + 24);
  if ( v8 != nullsub_10 )
  {
    v17 = v7;
    ((void (__cdecl *)(int))v8)(a1);
    v7 = v17;
  }
  if ( n )
  {
    *(_BYTE *)(a1 + 4) = 1;
    if ( v7 != -15059582 )
    {
      v9 = (const char *)sub_80BBF50(v5);
      v10 = v9;
      if ( v9 && (v11 = strlen(v9), (na = v11) != 0) )
      {
        v14 = v11 + 1;
        v15 = *(void **)(a1 + 8);
        if ( *(_DWORD *)(a1 + 16) < v14 )
        {
          v18 = v14;
          v15 = sub_80CF920(a1 + 8, v15, v14, 1u);
          *(_DWORD *)(a1 + 8) = v15;
          v14 = v18;
        }
        *(_DWORD *)(a1 + 12) = v14;
        memmove(v15, v10, na);
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + na) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 12) = 0;
      }
    }
  }
  v12 = -1;
LABEL_18:
  sub_80BC240(&v21);
  if ( v22 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v12;
}
// 80BC865: bad sp value at call
// 80BC882: bad sp value at call
// 80A5660: using guessed type int nullsub_10();
