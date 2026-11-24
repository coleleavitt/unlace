v_cmp_lt_i32_e32 vcc_lo, v2, v3
v_cmpx_gt_i32_e32 v0, v1
s_cbranch_execz 3
v_cndmask_b32_e32 v4, v5, v6, vcc_lo
global_store_dword v[8:9], v4, off
s_endpgm
