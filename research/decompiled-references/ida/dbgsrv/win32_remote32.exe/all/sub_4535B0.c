/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4535B0
// Address: 0x004535B0

//----- (004535B0) --------------------------------------------------------
void __usercall __noreturn sub_4535B0(int a1@<esi>, UINT a2)
{
  int (__stdcall ***v2)(int); // eax
  int (__stdcall ***v3)(int); // esi
  int (__stdcall *v4)(int); // eax
  int (__stdcall *v5)(int); // eax

  byte_4B70FC = 1;
  if ( !dword_4B70F8 )
    goto LABEL_18;
  if ( dword_4B70F4 )
  {
    v2 = (int (__stdcall ***)(int))sub_4627C2(0x14u);
    v3 = v2;
    if ( v2 )
    {
      v2[1] = nullptr;
      v2[2] = nullptr;
      *v2 = &off_4A14E4;
      v2[3] = (int (__stdcall **)(int))a2;
      *((_BYTE *)v2 + 16) = 1;
    }
    else
    {
      v3 = nullptr;
    }
    if ( sub_455100() )
    {
      v4 = **v3;
      if ( v4 == sub_453170 )
        sub_453170((int)v3);
      else
        v4((int)v3);
    }
    else
    {
      ((void (__cdecl *)(int, int (__stdcall ***)(int), int, int))off_4B46B0)(86, v3, 2, a1);
      if ( !v3 )
        goto LABEL_14;
    }
    v5 = (*v3)[1];
    if ( (char *)v5 == (char *)sub_453080 )
      sub_453080(v3, 1);
    else
      ((void (__thiscall *)(int (__stdcall ***)(int), int))v5)(v3, 1);
  }
LABEL_14:
  if ( !byte_4B710C )
  {
    byte_4B710C = 1;
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(546);
  }
LABEL_18:
  sub_46BC95(a2);
  JUMPOUT(0x453680);
}
// 45367B: control flows out of bounds to 453680
// 4A14E4: using guessed type int (__stdcall *off_4A14E4)(int);
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4B70F0: using guessed type char byte_4B70F0;
// 4B70F4: using guessed type int dword_4B70F4;
// 4B70FC: using guessed type char byte_4B70FC;
// 4B710C: using guessed type char byte_4B710C;
