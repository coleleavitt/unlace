__int64 __fastcall sub_1E3900(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // r12
  int v3; // ebp
  __int64 v4; // rbx
  int v5; // edx

  result = *a1;
  if ( *(int *)(*a1 + 64) > 1 )
  {
    v2 = 8;
    v3 = 1;
    while ( 1 )
    {
      ++v3;
      v4 = *(_QWORD *)(*(_QWORD *)(result + 528) + v2);
      sub_13F6F0((unsigned __int64 **)(v4 + 424));
      *(_BYTE *)(v4 + 440) = 1;
      sub_13F6F0((unsigned __int64 **)(v4 + 456));
      *(_BYTE *)(v4 + 472) = 1;
      result = *a1;
      v5 = *(_DWORD *)(*a1 + 64);
      if ( v5 <= v3 )
        break;
      v2 += 8;
      if ( v3 >= (unsigned int)v5 )
      {
        if ( !under_debugger )
          sub_3835A0(52719);
        BUG();
      }
    }
  }
  return result;
}
