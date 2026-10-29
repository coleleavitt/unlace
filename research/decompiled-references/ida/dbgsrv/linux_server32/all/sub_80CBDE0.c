/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CBDE0
// Address: 0x080CBDE0

//----- (080CBDE0) --------------------------------------------------------
char *__cdecl sub_80CBDE0(_BYTE *a1)
{
  char **v2; // edi
  size_t v3; // edx
  char *v4; // eax
  size_t v5; // ecx
  size_t v6; // [esp+0h] [ebp-1054h]
  char *v7; // [esp+4h] [ebp-1050h]
  size_t v8; // [esp+4h] [ebp-1050h]
  size_t v9; // [esp+4h] [ebp-1050h]
  pthread_mutex_t *mutex; // [esp+18h] [ebp-103Ch] BYREF
  void *ptr; // [esp+1Ch] [ebp-1038h] BYREF
  int v12; // [esp+20h] [ebp-1034h]
  int v13; // [esp+24h] [ebp-1030h]
  pthread_mutex_t *v14[4]; // [esp+28h] [ebp-102Ch] BYREF
  char v15[4060]; // [esp+38h] [ebp-101Ch] BYREF
  unsigned int v16; // [esp+1038h] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  sub_80D15D0(&mutex);
  if ( byte_811E8A0 )
    goto LABEL_2;
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  if ( !(_BYTE)dword_811E84C )
    goto LABEL_7;
  if ( !(unsigned __int8)sub_80D2000("IDADIR", &ptr) )
  {
    if ( (_BYTE)dword_811E84C )
    {
      *(_OWORD *)v14 = 0;
      if ( dladdr(sub_80CBDE0, v14) )
      {
        sub_80D0740((unsigned int)&byte_811E8A0, (char *)v14[0], 4096);
LABEL_8:
        if ( !(unsigned __int8)sub_80CEDA0((int)&byte_811E8A0) )
          sub_80CE6B0(&byte_811E8A0, 0x1000u, &byte_811E8A0);
        goto LABEL_10;
      }
    }
LABEL_7:
    sub_80CBD80(&byte_811E8A0, 0x1000u);
    goto LABEL_8;
  }
  sub_80D0740((unsigned int)&byte_811E8A0, (char *)ptr, 4096);
LABEL_10:
  if ( ptr )
  {
    v12 = 0;
    sub_80CF780(ptr);
  }
LABEL_2:
  v7 = &byte_811E8A0;
  if ( a1 && *a1 )
  {
    sub_80CE680(v15, 4096, &byte_811E8A0, a1, 0);
    v2 = (char **)sub_80C7B30();
    v3 = strlen(v15);
    if ( v3 )
    {
      v4 = *v2;
      v5 = v3 + 1;
      if ( (unsigned int)v2[2] < v3 + 1 )
      {
        v6 = v3;
        v9 = v3 + 1;
        v4 = (char *)sub_80CF920((int)v2, v4, v3 + 1, 1u);
        v3 = v6;
        v5 = v9;
        *v2 = v4;
      }
      v2[1] = (char *)v5;
      v8 = v3;
      memmove(v4, v15, v3);
      (*v2)[v8] = 0;
    }
    else
    {
      v2[1] = nullptr;
    }
    v7 = *v2;
  }
  sub_80D1600(mutex);
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v7;
}
// 804B8E0: using guessed type int __cdecl dladdr(_DWORD, _DWORD);
// 811E84C: using guessed type int dword_811E84C;
// 811E8A0: using guessed type char byte_811E8A0;
