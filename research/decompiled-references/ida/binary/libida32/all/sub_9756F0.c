__int64 __fastcall sub_9756F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  result = *(_QWORD *)(a1 + 328);
  if ( *(_BYTE *)(result + 59) || *(_BYTE *)(result + 60) || *(_BYTE *)(result + 63) )
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0xF9 )
    {
      result = *(unsigned int *)(a2 + 4);
      v3 = (_QWORD *)(a2 + 16);
      v4 = a2 + 8 * result + 16;
      if ( v4 != a2 + 16 )
      {
        v5 = 0;
        do
        {
          result = sub_EC6090(*v3);
          if ( (*(_WORD *)result & 0x1FF) == 0xF5 )
          {
            result = sub_975650(a1, result, v5, v6, v7, v8);
            v5 = result;
          }
          ++v3;
        }
        while ( (_QWORD *)v4 != v3 );
      }
    }
    else
    {
      result = sub_EC6090(a2);
      if ( (*(_WORD *)result & 0x1FF) == 0xF5 )
        return sub_975650(a1, result, 0, v9, v10, v11);
    }
  }
  return result;
}

