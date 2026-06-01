/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CC210
// Address: 0x080CC210

//----- (080CC210) --------------------------------------------------------
int __cdecl sub_80CC210(int *a1)
{
  unsigned int v1; // edi
  const void *v2; // edx
  void *v3; // eax
  int v4; // edi
  int *v6; // eax
  size_t v7; // eax
  size_t v8; // edx
  unsigned int v9; // ecx
  void *v10; // eax
  size_t v11; // [esp+0h] [ebp-1034h]
  int v12; // [esp+4h] [ebp-1030h]
  size_t v13; // [esp+4h] [ebp-1030h]
  unsigned int v14; // [esp+4h] [ebp-1030h]
  pthread_mutex_t *mutex; // [esp+14h] [ebp-1020h] BYREF
  char s[4096]; // [esp+18h] [ebp-101Ch] BYREF
  unsigned int v17; // [esp+1018h] [ebp-1Ch]

  v17 = __readgsdword(0x14u);
  sub_80D15D0(&mutex);
  v1 = dword_811E884;
  if ( (unsigned int)dword_811E884 > 1 )
    goto LABEL_2;
  v6 = sub_80CC0C0();
  sub_80D0740((unsigned int)s, (char *)v6, 4096);
  if ( s[0] )
  {
    sub_80CE680(s, 4096, s, ".idapro", 0);
    if ( !(unsigned __int8)sub_80CED40((int)s) )
      sub_80CEBA0(s, 0x1FFu);
    v7 = strlen(s);
    v8 = v7;
    if ( !v7 )
    {
      dword_811E884 = 0;
      v4 = 0;
      goto LABEL_7;
    }
    v9 = v7 + 1;
    v10 = (void *)dword_811E880;
    if ( dword_811E888 < v9 )
    {
      v11 = v8;
      v14 = v9;
      v10 = sub_80CF920((int)&dword_811E880, (void *)dword_811E880, v9, 1u);
      v8 = v11;
      dword_811E880 = (int)v10;
      v9 = v14;
    }
    dword_811E884 = v9;
    v13 = v8;
    memmove(v10, s, v8);
    *(_BYTE *)(dword_811E880 + v13) = 0;
    v1 = dword_811E884;
  }
  else
  {
    v1 = dword_811E884;
  }
  if ( v1 > 1 )
  {
LABEL_2:
    if ( a1 != &dword_811E880 )
    {
      v2 = (const void *)dword_811E880;
      v3 = (void *)*a1;
      if ( a1[2] < v1 )
      {
        v12 = dword_811E880;
        v3 = sub_80CF920((int)a1, v3, v1, 1u);
        *a1 = (int)v3;
        v2 = (const void *)v12;
      }
      a1[1] = v1;
      memmove(v3, v2, v1 - 1);
      *(_BYTE *)(*a1 + v1 - 1) = 0;
    }
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
LABEL_7:
  sub_80D1600(mutex);
  if ( v17 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
// 811E880: using guessed type int dword_811E880;
// 811E884: using guessed type int dword_811E884;
// 811E888: using guessed type int dword_811E888;
