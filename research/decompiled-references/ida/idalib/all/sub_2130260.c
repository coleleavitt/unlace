__int64 __fastcall sub_2130260(__int64 a1, void *a2, size_t a3, int a4)
{
  __int64 v6; // rax
  unsigned int v7; // r15d
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // r8
  int v11; // eax
  _BYTE *v12; // rdx
  bool v14; // al
  __int64 v15; // [rsp+0h] [rbp-88h]
  __int64 v16; // [rsp+8h] [rbp-80h]
  const __m128i *v17; // [rsp+10h] [rbp-78h] BYREF
  _BYTE *v18; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v19[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+40h] [rbp-48h]

  v6 = sub_2153C00(a1);
  v15 = sub_2124B50(v6);
  v7 = sub_212D800(a2, a3, a4 & 0xFD ^ 1u, a1, &v17, &v18);
  if ( !(_BYTE)v7 && v17 )
  {
    v8 = *(_QWORD *)(a1 + 848) == 0;
    v19[0] = a2;
    v19[1] = a3;
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 760);
      v10 = v9 + 16LL * *(unsigned int *)(a1 + 768);
      if ( v9 == v10 )
      {
LABEL_9:
        v12 = v18;
        if ( a4 == 2 )
        {
LABEL_16:
          (*(void (__fastcall **)(_QWORD, const __m128i *, _BYTE *))(**(_QWORD **)(a1 + 24) + 272LL))(
            *(_QWORD *)(a1 + 24),
            v17,
            v12);
          return v7;
        }
LABEL_10:
        if ( a4 == 3 )
        {
          if ( *v12 == 2 )
          {
            (*(void (__fastcall **)(_QWORD, const __m128i *))(**(_QWORD **)(a1 + 24) + 280LL))(
              *(_QWORD *)(a1 + 24),
              v17);
          }
          else
          {
            v19[0] = "expected identifier";
            v20 = 259;
            return (unsigned int)sub_2153E90(a1, v15, v19, 0, 0);
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, const __m128i *, _BYTE *))(**(_QWORD **)(a1 + 24) + 272LL))(
            *(_QWORD *)(a1 + 24),
            v17,
            v12);
          (*(void (__fastcall **)(_QWORD, const __m128i *, __int64))(**(_QWORD **)(a1 + 24) + 296LL))(
            *(_QWORD *)(a1 + 24),
            v17,
            18);
        }
        return v7;
      }
      while ( 1 )
      {
        if ( *(_QWORD *)(v9 + 8) == a3 )
        {
          if ( !a3 )
            break;
          v16 = v10;
          v11 = memcmp(*(const void **)v9, a2, a3);
          v10 = v16;
          if ( !v11 )
            break;
        }
        v9 += 16;
        if ( v10 == v9 )
          goto LABEL_9;
      }
      v14 = v9 != v10;
    }
    else
    {
      v14 = sub_21300B0(a1 + 808, (__int64)v19) != a1 + 816;
    }
    if ( v14 )
      return v7;
    v12 = v18;
    if ( a4 == 2 )
      goto LABEL_16;
    goto LABEL_10;
  }
  return v7;
}
