unsigned __int64 __fastcall sub_3C7040(double a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdi

  result = netnode_inited(a1);
  if ( (_BYTE)result )
  {
    result = get_module_data((unsigned int)dword_8CD7F0);
    if ( !*(_BYTE *)(result + 176) )
    {
      v2 = *(_QWORD *)(result + 168);
      if ( v2 )
      {
        if ( *(_BYTE *)(v2 + 80) || (result = *(_QWORD *)(v2 + 72)) == 0 )
        {
          if ( !*(_BYTE *)(v2 + 112) )
          {
            if ( *(_QWORD *)(v2 + 104) )
              return sub_3C6D20(v2);
          }
        }
        else
        {
          return sub_4E4640(result + 304, 7, 0);
        }
      }
    }
  }
  return result;
}
