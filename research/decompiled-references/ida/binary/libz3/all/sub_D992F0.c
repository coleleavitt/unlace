char *__fastcall sub_D992F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  char *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // r13
  _DWORD *v10; // rbp
  bool v11; // zf

  v2 = sub_186B270(0xA0u);
  result = (char *)sub_1373200(v2, *(_QWORD *)(a1 + 32));
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    sub_13734A0(v2, *(_QWORD *)(a1 + 48), v4, v5, v6, v7);
    sub_13775E0(v2, v8);
    result = sub_D98510(a1, v8, v2);
  }
  v9 = *a2;
  if ( *a2 )
  {
    sub_13734A0(v2, *a2, v4, v5, v6, v7);
    sub_13775E0(v2, v9);
    result = sub_D98510(a1, v9, v2);
    v10 = (_DWORD *)*a2;
    ++*(_DWORD *)(v2 + 16);
    if ( v10 && (v11 = v10[4] == 1, --v10[4], v11) )
    {
      (**(void (__fastcall ***)(_DWORD *))v10)(v10);
      result = (char *)sub_186B220(v10);
      *a2 = v2;
    }
    else
    {
      *a2 = v2;
    }
  }
  else
  {
    ++*(_DWORD *)(v2 + 16);
    *a2 = v2;
  }
  return result;
}

