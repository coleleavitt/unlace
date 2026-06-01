/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x00000000000C1410

//----- (00000000000C1410) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> qgetcwd(char *a1, size_t a2)
{
  const char *v2; // rax

  if ( !getcwd(a1, a2) )
  {
    v2 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("getcwd: %s", v2);
  }
}
