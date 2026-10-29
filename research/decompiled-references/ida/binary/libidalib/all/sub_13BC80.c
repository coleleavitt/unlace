__int64 sub_13BC80()
{
  unsigned __int64 *v0; // rax
  int v1; // eax
  int v2; // edx
  __int64 result; // rax
  int v4; // r12d
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 that; // rbx
  unsigned __int64 v8; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-190h] BYREF
  __int128 v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+20h] [rbp-178h]
  __int64 v12; // [rsp+28h] [rbp-170h]
  __int64 v13; // [rsp+30h] [rbp-168h]
  char v14; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-20h] BYREF

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_161C80(0, &v8, &v9) )
  {
    v4 = sub_C0990(
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
    if ( (unsigned int)sub_13B890(
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
      sub_15E150(v6, v5 - v6);
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
    v11 = -1;
    v12 = 0;
    v10 = -1;
    v0 = (unsigned __int64 *)&v14;
    v13 = 0;
    v8 = xmmword_2528A0;
    do
    {
      *(_WORD *)v0 = 0;
      v0 += 5;
      *((_WORD *)v0 - 19) = 0;
      *((_WORD *)v0 - 18) = 0;
      *((_DWORD *)v0 - 2) = 0;
      *((_WORD *)v0 - 17) = 0;
      *((_OWORD *)v0 - 2) = 0;
      *(v0 - 2) = 0;
    }
    while ( &v15 != v0 );
    clr_abits();
    v1 = decode_insn();
    v2 = sub_13B890(
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

