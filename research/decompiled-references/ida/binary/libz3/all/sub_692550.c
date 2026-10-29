__int64 __fastcall sub_692550(__int64 a1, __m128 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 result; // rax
  void *v10; // rbp
  bool v11; // zf
  int v12; // r13d
  int v13; // ebp
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // edx
  _Unwind_Exception *v23; // [rsp+0h] [rbp-58h]
  int v24; // [rsp+8h] [rbp-50h]
  unsigned int v25; // [rsp+Ch] [rbp-4Ch]
  int v26; // [rsp+10h] [rbp-48h]
  void *ptr[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 4408);
  v4 = *(_DWORD *)(a1 + 4456);
  if ( v3 )
    v5 = *(_DWORD *)(v3 - 4);
  else
    v5 = 0;
  if ( v4 != v5 )
  {
    if ( *(_BYTE *)(a1 + 4544) )
    {
      v12 = v3 + 8 * v4;
      v13 = v5 - v4;
      sub_11C7890(a1 + 96);
      if ( *(_BYTE *)(a1 + 3280) )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_20;
      }
      v14 = *(_QWORD *)(a1 + 4704);
      if ( v14 )
      {
        v11 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v11 )
          sub_68ECD0((void (***)(void))v14);
      }
      v15 = *(unsigned __int8 *)(a1 + 385);
      v16 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 4704) = 0;
      sub_786C50(a1 + 4376, v16, a1 + 4392, a1 + 96, a1 + 4480, a1 + 4840, v15);
      sub_787B60(a1 + 4376, v13, v12, v17, v18, v19);
      v20 = *(_QWORD *)(a1 + 4752);
      if ( !v20 )
      {
        v20 = sub_186B270(0x68u);
        sub_781140(v20, *(_QWORD *)(a1 + 8));
        ++*(_DWORD *)(v20 + 8);
        sub_68D080(*(void (****)(void))(a1 + 4752));
        *(_QWORD *)(a1 + 4752) = v20;
      }
      sub_7826B0(v20, a1 + 96, a1 + 4480);
      result = sub_690EA0((__m128 *)a1);
    }
    else
    {
      v6 = (_DWORD *)sub_186B270(0x80u);
      sub_ED29A0(v6, *(_QWORD *)(a1 + 8), 1, 0);
      v7 = *(_QWORD *)(a1 + 4408);
      ++v6[8];
      ptr[0] = v6;
      if ( v7 )
      {
        v8 = *(_DWORD *)(a1 + 4456);
        do
        {
          if ( v8 >= *(_DWORD *)(v7 - 4) )
            break;
          sub_EDBA20((int)ptr[0], *(_QWORD *)(v7 + 8LL * v8), 0, v23, v24, v26, (__int64)ptr[0], (__int64)ptr[1]);
          v7 = *(_QWORD *)(a1 + 4408);
          ++v8;
        }
        while ( v7 );
      }
      result = sub_691DA0(a1, (__int64)ptr, a2);
      v10 = ptr[0];
      if ( ptr[0] )
      {
        v11 = (*((_DWORD *)ptr[0] + 8))-- == 1;
        if ( v11 )
        {
          v25 = result;
          sub_ED44E0(v10);
          sub_186B220(v10);
          result = v25;
        }
      }
    }
    if ( !(_DWORD)result )
    {
LABEL_23:
      *(_BYTE *)(a1 + 4808) = 0;
      return result;
    }
LABEL_20:
    v21 = *(_QWORD *)(a1 + 4408);
    if ( v21 )
      v22 = *(_DWORD *)(v21 - 4);
    else
      v22 = 0;
    *(_DWORD *)(a1 + 4456) = v22;
    goto LABEL_23;
  }
  return 1;
}

