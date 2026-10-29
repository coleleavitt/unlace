__int64 __fastcall sub_54BCA0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rax
  void *v5; // rax
  void *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int8 *v10; // [rsp+8h] [rbp-98h] BYREF
  void *v11; // [rsp+10h] [rbp-90h] BYREF
  void *v12; // [rsp+18h] [rbp-88h] BYREF
  void *v13; // [rsp+20h] [rbp-80h] BYREF
  __int128 v14; // [rsp+28h] [rbp-78h]
  void *v15; // [rsp+40h] [rbp-60h] BYREF
  __int128 v16; // [rsp+48h] [rbp-58h]
  void *ptr; // [rsp+60h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-38h]
  unsigned __int64 v19; // [rsp+78h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  v15 = nullptr;
  ptr = nullptr;
  v16 = 0;
  v18 = 0;
  if ( !(unsigned __int8)sub_5373A0(a1, a3, (__int64 *)&v13, (__int64 *)&v15, (__int64 *)&ptr) )
    goto LABEL_9;
  v4 = nullptr;
  if ( (unsigned __int64)v14 > 1 )
    v4 = (unsigned __int8 *)v13;
  v10 = v4;
  v5 = nullptr;
  if ( (unsigned __int64)v16 > 1 )
    v5 = v15;
  v11 = v5;
  v6 = nullptr;
  if ( (unsigned __int64)v18 > 1 )
    v6 = ptr;
  v7 = a1[1];
  v12 = v6;
  if ( (unsigned __int8)sub_53B270(a1, a2, v7, &v10, (__int64)&v11, (__int64)&v12, nullptr) )
    v8 = sub_53E720((__int64)a1, a2, a3);
  else
LABEL_9:
    v8 = 0;
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v8;
}
