/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80747C0
// Address: 0x080747C0

//----- (080747C0) --------------------------------------------------------
char *__cdecl sub_80747C0(int a1, const char *a2)
{
  int v2; // eax
  size_t v3; // eax
  size_t n; // [esp+0h] [ebp-48h]
  void *v6; // [esp+4h] [ebp-44h]
  char *s; // [esp+Ch] [ebp-3Ch]
  unsigned __int8 v8[4]; // [esp+18h] [ebp-30h] BYREF
  void *ptr[4]; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v10; // [esp+2Ch] [ebp-1Ch]

  v10 = __readgsdword(0x14u);
  v2 = sub_8080EC0("exception");
  sub_808AAF0(a1, v2);
  v8[0] = 2;
  *(_OWORD *)ptr = 0;
  sub_8089430((int)v8);
  if ( a2 )
  {
    v3 = strlen(a2);
    v8[0] = 7;
    memset(ptr, 0, 12);
    if ( v3 )
    {
      n = v3;
      v6 = (void *)(v3 + 1);
      ptr[0] = sub_80CF920((int)ptr, nullptr, v3 + 1, 1u);
      ptr[1] = v6;
      memmove(ptr[0], a2, n);
      *((_BYTE *)ptr[0] + n) = 0;
    }
  }
  else
  {
    v8[0] = 7;
    memset(ptr, 0, 12);
  }
  sub_808C1E0(a1, "description", v8, 0);
  s = (char *)sub_80C7880(90);
  sub_8089430((int)v8);
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return s;
}
