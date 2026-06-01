/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808C8A0
// Address: 0x0808C8A0

//----- (0808C8A0) --------------------------------------------------------
unsigned int __usercall sub_808C8A0@<eax>(int a1@<eax>)
{
  int v2; // eax
  size_t v3; // eax
  unsigned int result; // eax
  size_t n; // [esp+0h] [ebp-4Ch]
  size_t v6; // [esp+4h] [ebp-48h]
  void *v7; // [esp+8h] [ebp-44h]
  char *s; // [esp+Ch] [ebp-40h]
  char v9[4]; // [esp+1Ch] [ebp-30h] BYREF
  void *ptr; // [esp+20h] [ebp-2Ch] BYREF
  size_t v11; // [esp+24h] [ebp-28h]
  int v12; // [esp+28h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-20h]
  unsigned int v14; // [esp+30h] [ebp-1Ch]

  v14 = __readgsdword(0x14u);
  v7 = (void *)sub_80C7850();
  v2 = sub_8080EC0("exception");
  sub_808AAF0(a1, v2);
  v9[0] = 2;
  ptr = v7;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  sub_808C1E0(a1, "qerrno", (unsigned __int8 *)v9, 0);
  s = (char *)sub_80D0970(-1);
  sub_8089430((int)v9);
  if ( s )
  {
    v3 = strlen(s);
    v9[0] = 7;
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
    if ( v3 )
    {
      n = v3;
      v6 = v3 + 1;
      ptr = sub_80CF920((int)&ptr, nullptr, v3 + 1, 1u);
      v11 = v6;
      memmove(ptr, s, n);
      *((_BYTE *)ptr + n) = 0;
    }
  }
  else
  {
    v9[0] = 7;
    ptr = nullptr;
    v11 = 0;
    v12 = 0;
  }
  sub_808C1E0(a1, "description", (unsigned __int8 *)v9, 0);
  sub_80C7880((int)v7);
  sub_8089430((int)v9);
  result = v14 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
