__int64 __fastcall sub_37D8A0(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 result; // rax
  _DWORD *v7; // r12
  int v9; // eax
  int v10; // [rsp+0h] [rbp-18h]
  void *v11; // [rsp+8h] [rbp-10h]

  v2 = (_DWORD *)sub_186B270(0xA0u);
  sub_1373200(v2, *(_QWORD *)(a1 + 32));
  ++v2[4];
  sub_37D2A0(a1, *a2, (int)v2, v3, v4, v5, v10, v11);
  result = (unsigned int)v2[4];
  v7 = (_DWORD *)*a2;
  v2[4] = result + 1;
  if ( !v7 )
  {
    *a2 = v2;
    v2[4] = result;
    if ( (_DWORD)result )
      return result;
LABEL_7:
    (**(void (__fastcall ***)(_DWORD *))v2)(v2);
    return sub_186B220(v2);
  }
  if ( v7[4]-- == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v7)(v7);
    sub_186B220(v7);
  }
  v9 = v2[4];
  *a2 = v2;
  result = (unsigned int)(v9 - 1);
  v2[4] = result;
  if ( !(_DWORD)result )
    goto LABEL_7;
  return result;
}

