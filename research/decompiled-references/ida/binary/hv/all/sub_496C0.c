__int64 *__fastcall sub_496C0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  unsigned __int64 v4; // rbp
  void *v5; // rdi
  void (__fastcall *v7)(__int64 *); // rax
  __int64 *v8; // rdi
  void *v9; // rdi
  const void *v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = (const void *)__readfsqword(0x28u);
  v2 = operator new(0x40u);
  *(_BYTE *)(v2 + 8) = 25;
  v3 = (__int64 *)v2;
  *(_QWORD *)v2 = &off_1616B8;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  if ( a1 )
  {
    v10[0] = a1;
    v4 = (unsigned __int64)a1 + a2;
    if ( __CFADD__(a2, a1) )
    {
      if ( v2 )
      {
LABEL_4:
        v5 = (void *)v3[2];
        if ( v5 )
        {
          v3[3] = 0;
          j__free(v5);
        }
        operator delete(v3, 0x40u);
        return nullptr;
      }
      return nullptr;
    }
    if ( !(unsigned __int8)sub_480B0((__int64 *)(v2 + 16), v10, v4) || !(unsigned __int8)sub_480B0(v3 + 5, v10, v4) )
    {
      if ( v3 )
      {
        v7 = *(void (__fastcall **)(__int64 *))(*v3 + 8);
        if ( v7 != sub_3DFA0 )
        {
          v8 = v3;
          v3 = nullptr;
          v7(v8);
          return v3;
        }
        v9 = (void *)v3[5];
        *v3 = (__int64)&off_1616B8;
        if ( v9 )
        {
          v3[6] = 0;
          j__free(v9);
        }
        goto LABEL_4;
      }
      return nullptr;
    }
  }
  return v3;
}

