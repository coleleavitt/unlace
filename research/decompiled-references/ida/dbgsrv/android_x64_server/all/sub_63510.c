/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63510
// Address: 0x0000000000063510

//----- (0000000000063510) ----------------------------------------------------
__int64 __fastcall sub_63510(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  char *v6; // rax
  unsigned __int64 v7; // rcx
  char v8; // bp
  __int64 v9; // rbx
  __int64 v10; // rcx
  char *v11; // rax
  char v13; // [rsp+Fh] [rbp-29h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 232);
  v2 = *(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v1 - 4);
  if ( v1 )
    *(_QWORD *)(a1 + 232) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 208);
  if ( v3 + -4 - (_DWORD)v2 )
  {
    sub_6BEF0(*(_QWORD **)(a1 + 200), v2, v3 + -4 - v2);
    *(_BYTE *)(a1 + 212) = -1;
  }
  else
  {
    if ( v3 <= 4 )
    {
      if ( !(_BYTE)under_debugger )
        interr(708);
      BUG();
    }
    v4 = v3 - 5;
    *(_DWORD *)(a1 + 208) = v4;
    v5 = *(_QWORD *)(a1 + 200);
    v6 = *(char **)v5;
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(_BYTE *)(*(_QWORD *)v5 + v4);
    if ( v7 >= v4 )
    {
      if ( v7 != v4 )
      {
        v13 = 0;
        sub_5E330(v5, v4, &v13);
      }
    }
    else
    {
      if ( *(_QWORD *)(v5 + 16) < v4 )
      {
        v6 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v5, v4, 1u);
        *(_QWORD *)v5 = v6;
        v7 = *(_QWORD *)(v5 + 8);
      }
      memset(&v6[v7], 0, v4 - v7);
      *(_QWORD *)(v5 + 8) = v4;
    }
    *(_BYTE *)(a1 + 212) = -87;
    if ( v8 == -85 )
    {
      *(_BYTE *)(a1 + 212) = -85;
      v9 = *(_QWORD *)(a1 + 200);
      v10 = *(_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(v9 + 16) >= (unsigned __int64)(v10 + 1) )
      {
        v11 = *(char **)v9;
      }
      else
      {
        v11 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v9, v10 + 1, 1u);
        *(_QWORD *)v9 = v11;
        v10 = *(_QWORD *)(v9 + 8);
      }
      v11[v10] = -85;
      ++*(_QWORD *)(v9 + 8);
      ++*(_DWORD *)(a1 + 208);
      sub_616A0(a1, 0);
      sub_616A0(a1, 0);
    }
    else
    {
      sub_636B0(a1);
    }
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
