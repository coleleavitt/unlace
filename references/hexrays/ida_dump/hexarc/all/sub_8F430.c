__int64 __fastcall sub_8F430(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  int v6; // r13d
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // eax
  _DWORD *v11; // rdi
  _DWORD *v12; // rdx
  int v13; // [rsp+Ch] [rbp-1Ch]

  result = 0;
  if ( a3 > 0 )
  {
    v5 = (_DWORD *)(a1 + 32);
    v6 = 0;
    v7 = a3;
    v8 = a1;
    while ( 1 )
    {
      if ( *(_BYTE *)(v8 + 32) == 4 && (v11 = *(_DWORD **)(v8 + 40), a4 == *v11) )
      {
        v13 = a4;
        v10 = sub_8F430(v11, a2, (unsigned int)v7);
        a4 = v13;
        v9 = 8LL * v10;
      }
      else
      {
        *a2 = v5;
        v9 = 8;
        v10 = 1;
      }
      v7 -= v10;
      a2 = (_QWORD *)((char *)a2 + v9);
      if ( v7 <= 0 )
        break;
      if ( *(_BYTE *)(v8 + 48) != 4 || (v12 = *(_DWORD **)(v8 + 56), a4 != *v12) )
      {
        result = (unsigned int)(v10 + v6 + 1);
        *a2 = v8 + 48;
        return result;
      }
      v6 += v10;
      v8 = *(_QWORD *)(v8 + 56);
      v5 = v12 + 8;
    }
    return (unsigned int)(v6 + v10);
  }
  return result;
}
