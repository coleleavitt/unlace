__int64 __fastcall sub_517EC0(__int64 *a1, void **a2, unsigned int a3)
{
  void **p_ptr; // rbx
  __int64 v4; // rax
  __int64 *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // rbx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // [rsp+4h] [rbp-4Ch] BYREF
  void *ptr; // [rsp+8h] [rbp-48h] BYREF
  __int128 v14; // [rsp+10h] [rbp-40h]
  unsigned __int64 v15; // [rsp+20h] [rbp-30h]

  p_ptr = a2;
  v4 = *a1;
  v15 = __readfsqword(0x28u);
  v14 = 0;
  ptr = nullptr;
  v6 = *(__int64 **)(v4 + 1616);
  if ( !a2 )
    p_ptr = &ptr;
  v7 = *(_QWORD **)(*v6 + 1480);
  if ( (unsigned __int8)sub_6994A0(v7, p_ptr, a3) )
  {
    v8 = (__int64)p_ptr[1] + (p_ptr[1] == nullptr) - 1;
  }
  else
  {
    v10 = sub_3B90A0(v7, a3);
    v11 = *v6;
    v12 = v10;
    v8 = sub_79BD30(&v12, v11, p_ptr);
  }
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v8;
}

