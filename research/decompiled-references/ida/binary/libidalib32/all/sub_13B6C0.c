__int64 sub_13B6C0()
{
  unsigned __int64 *v0; // rax
  unsigned int v1; // eax
  int v2; // edx
  __int64 result; // rax
  int v4; // r12d
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  unsigned int that; // ebx
  unsigned int v8; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v9; // [rsp+Ch] [rbp-FCh] BYREF
  __int64 v10; // [rsp+10h] [rbp-F8h]
  __int64 v11; // [rsp+18h] [rbp-F0h]
  __int64 v12; // [rsp+20h] [rbp-E8h]
  char v13; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp-20h] BYREF

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161360(0, &v8, &v9) )
  {
    v4 = sub_C0230(
           (__int64)"~A~nalyze",
           (__int64)"~F~orce",
           (__int64)"~C~ancel",
           1u,
           (__int64)"Perform analysis or force conversion of the selected bytes to instruction(s)?");
    if ( v4 == -1 )
      return 0;
    v5 = v9;
    v6 = v8;
    if ( v8 < v9 )
    {
      do
      {
        ++v6;
        clr_abits();
      }
      while ( v6 < v5 );
      v5 = v9;
      v6 = v8;
    }
    if ( (unsigned int)sub_13B290(
                         v6,
                         v5 - v6,
                         "ICON WARNING\nAUTOHIDE DATABASE\nUndefine already existing code/data?",
                         1536,
                         nullptr,
                         nullptr) == -1 )
    {
      return 0;
    }
    else
    {
      sub_15D870(v6);
      that = v8;
      if ( v4 == 1 )
      {
        return (unsigned int)plan_and_wait() != 0;
      }
      else
      {
        while ( that != -1 )
        {
          create_insn();
          that = next_that();
        }
        return 1;
      }
    }
  }
  else
  {
    v10 = -1;
    v12 = 0;
    v11 = 0xFFFFFFFFLL;
    v0 = (unsigned __int64 *)&v13;
    v8 = qword_251700;
    do
    {
      *(_WORD *)v0 = 0;
      v0 += 3;
      *((_WORD *)v0 - 11) = 0;
      *((_WORD *)v0 - 10) = 0;
      *((_DWORD *)v0 - 1) = 0;
      *((_WORD *)v0 - 9) = 0;
      *(v0 - 2) = 0;
      *((_DWORD *)v0 - 2) = 0;
    }
    while ( &v14 != v0 );
    clr_abits();
    v1 = decode_insn();
    v2 = sub_13B290(
           v8,
           v1,
           "ICON WARNING\nHIDECANCEL\nAUTOHIDE DATABASE\nDirectly convert to code?",
           1536,
           nullptr,
           nullptr);
    result = 0;
    if ( v2 == 1 )
      return (int)auto_recreate_insn() > 0;
  }
  return result;
}

