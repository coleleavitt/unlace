__int64 __fastcall sub_16F00(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v4; // ebx
  void *v5; // r12
  __int64 v7; // r13
  void *v8; // rdi
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-78h] BYREF
  void *src; // [rsp+10h] [rbp-68h] BYREF
  __int128 v12; // [rsp+18h] [rbp-60h]
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  char v14; // [rsp+40h] [rbp-38h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13[1] = 7;
  v13[0] = off_3C6A0;
  v14 = 34;
  src = 0;
  v12 = 0;
  v4 = sub_16C40((__int64 *)&src, a2, (__int64)v13, a3);
  if ( (_BYTE)v4 )
  {
    v10[0] = &off_3C6C0;
    v10[1] = 15;
    sub_16C40((__int64 *)&src, (__int64 *)&src, (__int64)v10, 0);
    v7 = v12;
    v5 = src;
    if ( (unsigned __int64)v12 > 1 )
    {
      v8 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v12 )
      {
        v9 = qvector_reserve();
        *(_QWORD *)a1 = v9;
        v8 = (void *)v9;
      }
      *(_QWORD *)(a1 + 8) = v7;
      memmove(v8, v5, v7 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v7 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
  }
  else
  {
    v5 = src;
  }
  if ( v5 )
    qfree();
  return v4;
}
