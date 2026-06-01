/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8052FD0
// Address: 0x08052FD0

//----- (08052FD0) --------------------------------------------------------
int sub_8052FD0()
{
  int v0; // esi
  __pid_t v1; // eax
  FILE *v2; // eax
  FILE *v3; // edi
  int v4; // esi
  int v6; // eax
  __int64 filename; // [esp+0h] [ebp-420h] BYREF
  __int16 v8; // [esp+8h] [ebp-418h]
  char nptr[1014]; // [esp+Ah] [ebp-416h] BYREF
  unsigned int v10; // [esp+400h] [ebp-20h]

  v0 = 0;
  v10 = __readgsdword(0x14u);
  v1 = getpid();
  sub_80D3B60(&filename, 1024, "/proc/%d/status", v1);
  v2 = fopen((const char *)&filename, "r");
  if ( v2 )
  {
    v3 = v2;
    v4 = 16;
    while ( 1 )
    {
      if ( !fgets((char *)&filename, 1024, v3) )
      {
LABEL_6:
        v0 = 0;
        goto LABEL_7;
      }
      if ( filename == 0x6950726563617254LL && v8 == 14948 )
        break;
      if ( !--v4 )
        goto LABEL_6;
    }
    v6 = strtol(nptr, nullptr, 10);
    LOBYTE(v6) = v6 != 0;
    v0 = v6;
LABEL_7:
    fclose(v3);
  }
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v0;
}
