/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460C80
// Address: 0x00460C80

//----- (00460C80) --------------------------------------------------------
void __usercall __noreturn sub_460C80(__m128i a1@<xmm0>, _DWORD *a2, unsigned __int8 a3)
{
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  char *v5; // edi
  const char *v6; // ecx
  const char *v7; // ecx
  const char *v8; // eax
  void (*v9)(const char *, ...); // ebx
  const CHAR *v10; // esi
  CHAR *v11; // eax
  _BYTE *v12; // eax
  const CHAR *v13; // eax
  _DWORD v14[3]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+28h] [ebp-4h]

  sub_4013E0(v14);
  v3 = a2;
  v16 = 0;
  v4 = 0;
  v15 = sub_4609F0(a2);
  if ( v15 )
  {
    do
    {
      v5 = (char *)sub_4605A0(v3, v4);
      if ( *v5 )
      {
        v6 = " ...";
        if ( !*((_DWORD *)v5 + 4) )
          v6 = "    ";
        sub_41F840(a1, (int)v14, "  -%c%s", *v5, v6);
      }
      else
      {
        sub_404330((int)v14, "        ");
      }
      v7 = *((const char **)v5 + 1);
      if ( v7 )
      {
        v8 = " ...";
        if ( !*((_DWORD *)v5 + 4) )
          v8 = pNodeName;
        sub_41F840(a1, (int)v14, "  (--%s%s)", v7, v8);
      }
      sub_404330((int)v14, &byte_48A240);
      sub_404330((int)v14, *((const char **)v5 + 2));
      sub_404330((int)v14, "\n");
      v3 = a2;
      ++v4;
    }
    while ( v4 < v15 );
  }
  v9 = (void (*)(const char *, ...))sub_41C110;
  if ( v3[9] )
    v9 = (void (*)(const char *, ...))v3[9];
  v10 = sub_401680(v14);
  v11 = (CHAR *)sub_401680(v3 + 3);
  v12 = sub_456590(v11);
  v9("Usage: %s [options]\n%s", v12, v10);
  if ( !sub_404C70(v3 + 6) )
  {
    v13 = sub_401680(v3 + 6);
    v9("\n%s\n", v13);
  }
  sub_4535B0((int)v10, a3);
}
// 48A240: using guessed type char byte_48A240;
