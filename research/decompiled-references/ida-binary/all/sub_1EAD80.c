__int64 __fastcall sub_1EAD80(char a1)
{
  __int64 v1; // rdi
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( !(_BYTE)byte_8CB4D8 && __cxa_guard_acquire(&byte_8CB4D8) )
  {
    dword_8CB4E0 = unk_8BA8FC;
    __cxa_guard_release(&byte_8CB4D8);
  }
  if ( a1 )
  {
    if ( --dword_8CB4E0 <= 0 )
    {
      flush_buffers();
      dword_8CB4E0 = unk_8BA8FC;
    }
  }
  v1 = (unsigned __int8)getinf_flag(2, 1);
  enable_auto(v1);
  if ( (unsigned __int8)netnode_inited() )
    sub_388150((BYTE2(xmmword_8BCDC0) & 1) == 0 ? -1 : 1);
  sub_531B30(3, 0, 0);
  callui(81, 0, (unsigned int)&callui, v2, v3, v4);
  return set_ida_state(0);
}
