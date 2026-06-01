__int64 __fastcall sub_610770(__int64 a1, char a2, char a3)
{
  unsigned __int64 v5; // r14
  const char *v6; // rsi
  const char *v7; // rsi
  unsigned int v8; // ebx
  size_t v10; // r8
  __int64 v11; // r15
  size_t v12; // r9
  _BYTE *v13; // rsi
  size_t v14; // [rsp+0h] [rbp-78h]
  size_t v15; // [rsp+8h] [rbp-70h]
  unsigned int v16; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v17; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  ptr = nullptr;
  v19 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
  *(_QWORD *)&v19 = 3;
  strcpy((char *)ptr, "$ ");
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    goto LABEL_2;
  v10 = v5 - 1;
  if ( v5 == 1 )
    goto LABEL_15;
  v11 = v19;
  v12 = v5 - 1;
  if ( (_QWORD)v19 )
  {
    v11 = v19 - 1;
    v12 = v10 + v19 - 1;
    v5 += v19 - 1;
  }
  v13 = ptr;
  if ( *((_QWORD *)&v19 + 1) < v5 )
  {
    v15 = v12;
    v14 = v10;
    ptr = (void *)qvector_reserve(&ptr, ptr, v5, 1);
    v12 = v15;
    v13 = ptr;
    v10 = v14;
  }
  *(_QWORD *)&v19 = v5;
  v13[v12] = 0;
  memcpy((char *)ptr + v11, *(const void **)a1, v10);
  if ( *(_QWORD *)(a1 + 8) )
LABEL_15:
    v6 = *(const char **)a1;
  else
LABEL_2:
    v6 = haystack;
  netnode_check(&v16, v6, 0, 0);
  v7 = haystack;
  if ( (_QWORD)v19 )
    v7 = (const char *)ptr;
  netnode_check(&v17, v7, 0, 0);
  v8 = sub_610380(v16, v17, a2, a3);
  if ( (_BYTE)v8 )
  {
    if ( (_QWORD)v19 )
      netnode_rename(v16, ptr, 0);
    else
      netnode_rename(v16, haystack, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v19 = 0;
    qfree(ptr);
  }
  return v8;
}

