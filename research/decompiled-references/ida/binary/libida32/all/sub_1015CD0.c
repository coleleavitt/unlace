__int64 __fastcall sub_1015CD0(__int64 a1)
{
  _BYTE *v1; // r13
  __int64 v2; // rbx
  _QWORD *v3; // rax
  int v4; // edx
  __m128i v5; // xmm0
  int v6; // ecx
  __int64 v8; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-78h] BYREF
  void *v11[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-38h]

  v1 = *(_BYTE **)(a1 + 216);
  v2 = *(_QWORD *)(a1 + 224);
  v3 = v12;
  v11[0] = v12;
  if ( v1 == nullptr && &v1[v2] != nullptr )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v2 > 0xF )
  {
    if ( v2 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v3 = (_QWORD *)operator new(v2 + 1);
    v12[0] = v2;
    v11[0] = v3;
LABEL_16:
    memcpy(v3, v1, v2);
    v3 = v11[0];
    goto LABEL_5;
  }
  if ( v2 == 1 )
  {
    LOBYTE(v12[0]) = *v1;
    goto LABEL_5;
  }
  if ( v2 )
    goto LABEL_16;
LABEL_5:
  v11[1] = (void *)v2;
  *((_BYTE *)v3 + v2) = 0;
  v4 = *(_DWORD *)(a1 + 260);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v6 = *(_DWORD *)(a1 + 264);
  v14 = *(_QWORD *)(a1 + 264);
  v13 = v5;
  LOBYTE(v2) = (unsigned int)(v4 - 6) <= 1 || v4 == 35;
  if ( !(_BYTE)v2 || v6 == 17 )
  {
    LODWORD(v2) = 0;
    if ( v4 == 20 )
    {
      v10[1] = 0;
      v10[0] = 0x8000000200000007LL;
      v9[0] = sub_2293DC0(v11);
      v9[1] = v8;
      LODWORD(v2) = sub_9E60E0((unsigned int *)v9, (unsigned int *)v10) ^ 1;
    }
  }
  if ( v11[0] != v12 )
    operator delete(v11[0]);
  return (unsigned int)v2;
}

